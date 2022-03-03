from queue import PriorityQueue
import sys
pq = PriorityQueue()
n = int(sys.stdin.readline())
for i in range(n):
    inp = int(sys.stdin.readline())
    if inp == 0:
        if pq.empty() == 0:
            print(pq.get())
        else:
            print(0)
    else:
        pq.put(inp)