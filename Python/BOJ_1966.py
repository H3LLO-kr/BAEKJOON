import sys
T = int(input())
for _ in range(T):
    lst_input = list(map(int, sys.stdin.readline().split()))
    lst_input_import = list(map(int, sys.stdin.readline().split()))
    queue = list()
    for j in range(lst_input[0]):
        queue.append((j, lst_input_import[j]))
    count = 1
    lst_out = list()
    while len(queue) > 0:
        pop = queue.pop(0)
        importance = list()
        for i in range(len(queue)):
            importance.append(queue[i][1])
        if len(queue) != 0 and pop[1] < max(importance):
            queue.append(pop)
        else:
            lst_out.append(pop)
    for i in range(len(lst_out)):
        if lst_out[i][0] == lst_input[1]:
            print(i + 1)
            break