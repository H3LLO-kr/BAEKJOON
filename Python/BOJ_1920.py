N = int(input())
A = set(input().split())
M = int(input())
B = list(input().split())
for i in range(M):
    if B[i] in A: print(1)
    else: print(0)