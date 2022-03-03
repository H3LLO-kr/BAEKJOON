N = int(input())
fac_N = 1
for i in range(N):
    fac_N *= i + 1
count = 0
while ((fac_N // (10 ** count)) % 10 == 0): count += 1
print(count)