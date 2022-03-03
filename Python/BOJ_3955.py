import sys
import math
def extendedEuclidean(a, b):
    x0, x1, y0, y1 = 1, 0, 0, 1
    while b != 0:
        n, a, b = a // b, b, a % b
        x0, x1 = x1, x0 - n * x1
        y0, y1 = y1, y0 - n * y1
    return x0, y0

n = int(sys.stdin.readline())
for i in range(n):
    a, b = map(int, sys.stdin.readline().split())
    if b == 1:
        if a + 1 > 10 ** 9:
            print("IMPOSSIBLE")
        else:
            print(a + 1)
        continue
    if a == 1:
        print(1)
        continue
    x0, y0 = extendedEuclidean(a, b)
    if a * x0 + b * y0 == 1 and y0 <= 10 ** 9:
        if y0 >= 0:
            print(y0)
        else:
            print(a + y0)
    else:
        print("IMPOSSIBLE")