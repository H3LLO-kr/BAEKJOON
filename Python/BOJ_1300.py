n = int(input())
k = int(input())
low = 0
high = k
while low <= high:
    mid = (low + high) // 2
    count = 0
    for i in range(1, n + 1):
        count += min(mid // i, n)
    if count >= k:
        high = mid - 1
        ans = mid
    else:
        low = mid + 1
print(ans)