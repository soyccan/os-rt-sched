/* some struct names conform to naming convensions in Linux kernel
 * see sched.h
 */

#include <stdbool.h>

#include "list.h"  // ported linked-list from Linux kernel

enum SchedulePolicy { SP_RM = 0, SP_EDF = 1 };

struct task_struct {
    struct list_head node;
    struct sched_dl_entity dl;
    int id;
};

/* deadline information */
struct sched_dl_entity {
    /* original property of the task */
    int dl_runtime;  /* Maximum runtime for each instance	*/
    int dl_deadline; /* Relative deadline of each instance	*/
    int dl_period;   /* Separation of two instances (period) */

    /* current property when in queue */
    int runtime;  /* Remaining runtime for this instance	*/
    int deadline; /* Absolute deadline for this instance	*/
};

struct task_struct ready_queue, running_queue;
enum SchedulePolicy policy;
bool display_schedule = false;
int runs, num_task;

void input()
{
    scanf("%d%d%d%d", &runs, &policy, &display_schedule, &num_task);
    for (int i = 0; i < num_task; i++) {
        int runtime = 0, period = 0;
        scanf("%d%d", &runtime, &period);

        struct task_struct* task = malloc(sizeof(struct task_struct));
        INIT_LIST_HEAD(&task->node);
        task->dl.dl_runtime = task->dl.runtime = runtime;
        task->dl.dl_deadline = task->dl.deadline = period;
        task->dl.dl_period = period;

        list_add(task, &ready_queue);
    }
}

void show_queue(struct task_struct* q)
{
    struct task_struct* h;
    list_for_each_entry(h, q, q->node)
    {
        printf(
            "id=%d\ndl_runtime=%d dl_deadline=%d dl_period=%d\nruntime=%d "
            "deadline=%d\n",
            h->id, h->dl.dl_runtime, h->dl.dl_deadline, h->dl.dl_period,
            h->dl.runtime, h->dl.deadline);
    }
}

int main()
{
    input();
}