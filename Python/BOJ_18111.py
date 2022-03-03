import sys
n, m, inven = map(int, sys.stdin.readline().split())
lst_input = list()
for i in range(n):
    lst_input += list(map(int, sys.stdin.readline().split()))
ret_1 = 0
ret_0 = 1000000000000000000000000000000
for i in range(257):
    push = pop = 0
    for j in range(n * m):
        if lst_input[j] > i:
            pop += lst_input[j] - i
        elif lst_input[j] < i:
            push += i - lst_input[j]
    inventory = pop + inven
    if inventory < push:
        continue
    time = 2 * pop + push
    if time <= ret_0:
        ret_0 = time
        ret_1 = i

print(ret_0, ret_1)