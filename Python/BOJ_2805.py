import sys
n, m = map(int, input().split())
lst_tree = list(map(int, sys.stdin.readline().split()))
low = 1
high = max(lst_tree)
ret = 0
for i in lst_tree:
    ret += i
while low <= high:
    mid = (low + high) // 2
    count = 0
    for i in lst_tree:
        if i - mid > 0:
            count += i - mid
    if count >= m:
        low = mid + 1
    else:
        high = mid - 1
print(high)