import sys

L = []  # scheduling solution in packed format (time,task_id,action)
T = [0] * 20  # scheduling solution
S = [0] * 30  # time of arrival
P = [(), (1, 3), (2, 5), (3, 15)]  # task(runtime, period)

run = 1
lines = open(sys.argv[1]).readlines()
for line in lines:
    line = line.split(' ')
    if len(line) == 1:
        run = int(line[0])
        print()
        print('run {}'.format(run))
    elif len(line) == 2 and L:
        if run >= 0:
            L.sort(key=lambda x: (x[1], x[0]))
            print('L:', L)

            for i in range(0, len(L), 2):
                for j in range(L[i][0], L[i+1][0]):
                    T[j] = L[i][1]

            print('tm |', end='')
            for i in range(20):
                print('{: 3}|'.format(i), end='')
            print()

            print('   |', end='')
            for i in range(20):
                print('{: 3}|'.format(T[i]), end='')
            print()

            for i in range(1, 4):
                S = [0] * 30
                for j in range(0, 20, P[i][1]):
                    S[j:j+P[i][0]] = [i] * P[i][0]

                print('{}) |'.format(i), end='')
                for j in range(20):
                    print('%3s%s' % (str(S[j]) if S[j] > 0 else ' ',
                                     ' ' if S[j] == S[j+1] else '|'), end='')
                print()

        L.clear()
        T = [0] * 20
        S = [0] * 30

    elif len(line) == 3 or len(line) == 5:
        tm = line[0]
        for i in range(1, len(line), 2):
            a, b = line[i], line[i+1]
            L.append((int(tm), int(a), int(b)))
