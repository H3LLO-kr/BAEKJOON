import sys
m, seed, x1, x2 = map(int, sys.stdin.readline().split())
a, c = int()
k = x1 - x2
if k < 0:
    k += m
while(True):
    if seed % k == 0:
        a = seed // k
        break;
    else:
        k += m
while(True):
    