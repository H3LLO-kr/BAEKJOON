def fibo(n) :
    a = 0
    b = 1
    c = a + b
    if n < 2 :
        return n
    else :
        for i in range(1, n - 1):
            a = b
            b = c
            c = a + b
    return c

n = int(input())
result = fibo(n)
print(result)