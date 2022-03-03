def count(n, r, c):
    if n == 1:
        if r == 0:
            if c == 0:
                return 0
            else:
                return 1
        else:
            if c == 0:
                return 2
            else:
                return 3
    num = 2 ** (2 * (n- 1))
    return num * count(1, r // (2 ** (n - 1)), c // (2 ** (n - 1))) + count(n - 1, r % (2 ** (n-1)), c % (2 ** (n - 1)))
    
n, r, c = map(int, input().split())
print(count(n, r, c))