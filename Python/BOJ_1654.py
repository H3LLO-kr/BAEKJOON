import math
n, k = map(int, input().split())
lst_input = list()
for i in range(n):
    a = int(input())
    lst_input.append(a)
lst_input.sort()
low = 1
high = lst_input[len(lst_input) - 1]
ret = 0
while low <= high:
    count = 0
    mean = (low + high) // 2
    for i in range(n):
        count += lst_input[i] // mean
    if count >= k:
        if ret < mean:
            ret = mean
            low = mean + 1
    else:
        high = mean - 1
print(ret)