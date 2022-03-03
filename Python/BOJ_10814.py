n = int(input())
dct = list()
for i in range(n):
    a, b = input().split()
    a = int(a)
    dct.append((a, b))
lst = sorted(dct, key=lambda x : x[0])
for i in range(len(lst)):
    print(lst[i][0], lst[i][1])