import sys
n = int(input())
lst = list()
for i in range(n):
    tpl = tuple(map(int, sys.stdin.readline().split()))
    lst.append(tpl)
sort_lst = sorted(lst, key=lambda x:(x[1], x[0]))
for i in range(n):
    print(sort_lst[i][0], sort_lst[i][1])