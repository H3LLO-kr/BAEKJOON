from collections import deque
import sys
n = int(sys.stdin.readline())
dq = deque()
for i in range(n):
    lst = sys.stdin.readline().split()
    if lst[0] == 'push_front':
        dq.appendleft(lst[1])
    elif lst[0] == 'push_back':
        dq.append(lst[1])
    elif lst[0] == 'pop_front':
        if dq:
            print(dq.popleft())
        else:
            print('-1')
    elif lst[0] == 'pop_back':
        if dq:
            print(dq.pop())
        else:
            print('-1')
    elif lst[0] == 'size':
        print(len(dq))
    elif lst[0] == 'empty':
        if dq:
            print('0')
        else:
            print('1')
    elif lst[0] == 'front':
        if dq:
            front = dq.popleft()
            print(front)
            dq.appendleft(front)
        else:
            print('-1')
    elif lst[0] == 'back':
        if dq:
            back = dq.pop()
            print(back)
            dq.append(back)
        else:
            print('-1')