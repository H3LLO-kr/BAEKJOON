N = int(input());
for i in range(N):
    a, b = map(int, input().split())
    a %= 10
    if a == 1 or a == 5 or a == 6:
        print(a)
    elif a == 2 or a == 3 or a == 7 or a == 8:
        if b % 4 == 1:
            print(a)
        elif b % 4 == 2:
            print((a ** 2) % 10)
        elif b % 4 == 3:
            print((a ** 3) % 10)
        else:
            print((a ** 4) % 10)
    elif a == 4 or a == 9:
        if b % 2 == 1:
            print(a)
        else:
            print((a ** 2) % 10)
    else:
        print(10)