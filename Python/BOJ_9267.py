import sys
import math
from typing import AsyncContextManager
def extendedEuclidean(a, b):
    x0, x1, y0, y1 = 1, 0, 0, 1
    while b != 0:
        n, a, b = a // b, b, a % b
        x0, x1 = x1, x0 - n * x1
        y0, y1 = y1, y0 - n * y1
    return x0, y0

a, b, s = map(int, sys.stdin.readline().split())
gcd = int(math.gcd(a, b))
if a + b == 0 or s % gcd != 0:
    if s == 0:
        print("YES")
        exit()
    print("NO")
    exit()
if a == 0:
    if s % b == 0:
        print("YES")
        exit()
if b == 0:
    if s % a == 0:
        print("YES")
        exit()
s = s // gcd
a = a // gcd
b = b // gcd
x, y = extendedEuclidean(a, b)
x *= s
y *= s
for k in range(-x//b+1, y//a+1):
    if math.gcd(x + k * b, y - k * a) == 1:
        print("YES")
        exit()
print("NO")