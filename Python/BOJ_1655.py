from queue import PriorityQueue
import sys
pq = PriorityQueue()
for i in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    pq.put(n)
    if (i + 1) % 2 == 0:
        print(pq.queue[len(pq.queue) // 2 - 1])
    else:
        print(pq.queue[len(pq.queue) // 2])