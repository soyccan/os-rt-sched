#include <array>
#include <cassert>
#include <climits>
#include <cstdio>
#include <list>
#include <numeric>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

#define FOR(i, a, n) for (int i = a; i < n; i++)
#define MAXN 129

#ifndef NDEBUG
#define DBG(format, ...) fprintf(stderr, format "\n", ##__VA_ARGS__)
#define DBGN(format, ...) fprintf(stderr, format, ##__VA_ARGS__)
#else
#define DBG(...)
#define DBGN(...)
#endif

int R, S, D, N;
int T[MAXN], P[MAXN];
int F[MAXN];  // F[i]: the arrival time of the last task i that had become ready

struct State {
    int id;       // task id
    int runtime;  // remaining runtime
    int deadline;
};

list<State> ready;
vector<array<int, 3>> schedule;  // (time,task id,action)


list<State>::iterator getopt(list<State>& queue)
{
    list<State>::iterator opt = queue.begin();

    for (list<State>::iterator task = queue.begin(); task != queue.end();
         task++) {
        DBG("in queue: %d P=%d dealine=%d", task->id, P[task->id],
            task->deadline);
        if (S == 0) {
            // RM
            if (P[task->id] < P[opt->id] ||
                (P[task->id] == P[opt->id] && task->id < opt->id) ||
                (P[task->id] == P[opt->id] && task->id == opt->id &&
                 task->deadline < opt->deadline)) {
                opt = task;
            }
        } else {
            // EDF
            assert(task->deadline != opt->deadline || task->id != opt->id ||
                   task == opt);
            if (task->deadline < opt->deadline ||
                (task->deadline == opt->deadline && task->id < opt->id)) {
                opt = task;
            }
        }
    }
    return opt;
}

bool prior(int i, int j)
{
    // true if task i is prior to task j
    if (S == 0) {
        // RM
        return P[i] < P[j] || (P[i] == P[j] && i < j);
    } else {
        // EDF
        return F[i] + P[i] < F[j] + P[j] ||
               (F[i] + P[i] == F[j] + P[j] && i < j);
    }
}

bool can_finish(int curtm)
{
    // check hyperperiod (LCM)
    // FOR(i, 1, N + 1)
    // {
    //     if (curtm % P[i] != 0)
    //         return false;
    // }
    // return curtm;

    if (curtm == 0)
        return false;
    FOR(i, 1, N + 1)
    {
        if (F[i] + P[i] != curtm)
            return false;
    }
    return true;
}

int emulate()
{
    int curtm = 0;  // current time
    while (!can_finish(curtm)) {
        // check and add those have been ready to queue
        FOR(i, 1, N + 1)
        {
            if (F[i] + P[i] <= curtm) {
                F[i] += P[i];
                DBG("become ready %d F=%d T=%d P=%d", i, F[i], T[i], P[i]);

                ready.push_back(State{i, T[i], F[i] + P[i]});
            }
        }

        if (ready.empty()) {
            // jump (curtm) to earilest arrival
            int arrvtm = INT_MAX;
            FOR(i, 1, N + 1)
            {
                if (F[i] + P[i] < arrvtm) {
                    arrvtm = F[i] + P[i];
                }
            }
            DBG("arrvtm = %d", arrvtm);
            curtm = arrvtm;
            continue;
        }

        list<State>::iterator opt = getopt(ready);

        // start $opt
        schedule.push_back(
            {curtm, opt->id, (opt->runtime == T[opt->id] ? 0 : 3)});

        DBG("\ncurtim=%d opt=%d (P=%d, T=%d, F=%d) runtime=%d deadline=%d",
            curtm, opt->id, P[opt->id], T[opt->id], F[opt->id], opt->runtime,
            opt->deadline);

        // determine if will be preempted
        // check if any task with higher priority becomes ready before $opt ends
        int minarrv = INT_MAX;
        int preemptor_id = -1;
        FOR(i, 1, N + 1)
        {
            if (prior(i, opt->id) && F[i] + P[i] < curtm + opt->runtime &&
                F[i] + P[i] < minarrv) {
                minarrv = F[i] + P[i];
                preemptor_id = i;
            }
        }
        DBG("preemptor %d", preemptor_id);

        if (preemptor_id != -1) {
            // $opt is preempted by $preemptor
            F[preemptor_id] += P[preemptor_id];
            State* preemptor = new State{preemptor_id, T[preemptor_id],
                                         F[preemptor_id] + P[preemptor_id]};
            ready.push_back(*preemptor);


            DBG("preempted next=%d (T=%d, P=%d, F=%d) runtime=%d deadline=%d",
                preemptor->id, T[preemptor->id], P[preemptor->id],
                F[preemptor->id], preemptor->runtime, preemptor->deadline);

            opt->runtime -= F[preemptor->id] - curtm;
            assert(opt->runtime > 0);
            // if (opt->runtime <= 0) {
            //     DBG("done %d", opt->id);
            //     ready.erase(opt);
            // }
            curtm = F[preemptor->id];

            schedule.push_back({curtm, opt->id, 2});
            // if (F[next->id] < curtm + opt->runtime)
            //     schedule.push_back({curtm, opt->id, 2});
            // else {  // F[next->id] == curtm + opt->runtime
            //     DBG("preempted but done %d", opt->id);
            //     schedule.push_back({curtm, opt->id, 1});
            //     ready.erase(opt);
            // }
        } else {
            // $opt is done
            DBG("done opt=%d", opt->id);

            curtm += opt->runtime;
            ready.erase(opt);

            schedule.push_back({curtm, opt->id, 1});
        }
    }
    if (ready.empty())
        return curtm;
    else
        return 0;  // fail to schedule
}

void output_schedule()
{
    if (schedule.empty())
        return;
    sort(schedule.begin(), schedule.end(),
         [](array<int, 3> x, array<int, 3> y) {
             static int a[] = {2, 0, 1, 3};
             return make_pair(x[0], a[x[2]]) < make_pair(y[0], a[y[2]]);
         });
    printf("%d", schedule[0][0]);
    FOR(i, 0, schedule.size())
    {
        printf(" %d %d", schedule[i][1], schedule[i][2]);
        if (i == schedule.size() - 1)
            printf("\n");
        else if (schedule[i][0] != schedule[i + 1][0]) {
            printf("\n%d", schedule[i + 1][0]);
        }
    }
}

// void visualize_schedule()
// {
//     DBGN("|");
//     FOR(i, 0, 20) { DBGN("%3d|", i); }
//     DBGN("\n|");


//     static int tmp[2000];

//     sort(schedule.begin(), schedule.end(),
//          [](array<int, 3> x, array<int, 3> y) {
//              return make_pair(x[1], x[0]) < make_pair(y[1], y[0]);
//          });

//     for (int i = 0; i < schedule.size(); i += 2) {
//         FOR(j, schedule[i][0], schedule[i + 1][0]) tmp[j] = schedule[i][1];
//     }
//     FOR(i, 0, 20) DBGN("%3d|", tmp[i]);
//     DBG("");
// }

void output_epilogue(int endtm)
{
    int preempted_count = 0;
    FOR(i, 0, schedule.size())
    {
        if (schedule[i][2] == 3)
            preempted_count++;
    }
    printf("%d %d\n", endtm, preempted_count);
}

int main()
{
    scanf("%d", &R);
    for (int run = 1; run <= R; run++) {
        scanf("%d%d%d", &S, &D, &N);
        ready.clear();
        schedule.clear();
        FOR(i, 1, N + 1)
        {
            scanf("%d%d", &T[i], &P[i]);
            F[i] = 0;
            if (T[i] > P[i] || (T[i] == P[i] && N > 1)) {
                printf("0 0\n");
                return 0;
            }
            ready.push_back(State{i, T[i], P[i]});
        }

        DBG("\e[31mRUN %d policy %d\e[0m", run, S);
        printf("%d\n", run);

        if (D) {
            int endtm = emulate();
            if (endtm) {
                output_schedule();
                output_epilogue(endtm);
            } else {
                printf("0 0\n");
            }
        } else {
            long long endtm = 1;
            int p_count = 0;
            FOR(i, 1, N + 1) { endtm = lcm(endtm, P[i]); }
            printf("%lld %d\n", endtm, p_count);
        }
    }
    return 0;
}