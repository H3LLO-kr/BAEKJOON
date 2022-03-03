from collections import deque
for i in range(int(input())):
    func = list(input())
    n = int(input())
    deq = deque(input())
    deq.pop()
    deq.popleft()
    if deq:
        str = ''.join(deq)
        deq = deque(str.split(','))
    else:
        deq = deque([])
    state = 0
    error = 0
    for j in range(len(func)):
        if func[j] == 'R':
            state = (state + 1)  % 2
        else:
            if deq:
                if state:
                    deq.pop()
                else:
                    deq.popleft()
            else:
                error = 1
                break
    if error:
        print("error")
    else:
        if state:
            deq.reverse()
            print("[", end='')
            print(",".join(deq), end='')
            print("]")

        else:
            print("[", end='')
            print(",".join(deq), end='')
            print("]")