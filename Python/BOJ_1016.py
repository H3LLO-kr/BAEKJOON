minv, maxv = input().split()
minv = int(minv)
maxv = int(maxv)
field = [True for i in range(minv, maxv + 1)]
i = 2
while i * i <= maxv:
    j = 1
    while i * i * j <= maxv:
        if i * i * j >= minv:
            field[i * i * j - minv] = False
        j += 1
    i += 1
count = 0
for i in range(maxv - minv + 1):
    if field[i] == True:
        count += 1
print(count)