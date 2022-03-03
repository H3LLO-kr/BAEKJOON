a, b = map(int, input().split())
numerator = 1
denominator = 1
for i in range(b):
    numerator *= a
    a -= 1
for i in range(1, b + 1):
    denominator *= i
print(numerator // denominator) 