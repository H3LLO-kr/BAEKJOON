N = int(input())
for _ in range(N):
    m, n = map(int, input().split())
    num1 = 1
    num2 = 1
    for i in range(n - m + 1, n + 1): num1 *= i
    for i in range(1, m + 1): num2 *= i
    print(num1 // num2)