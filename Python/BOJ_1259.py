while True:
    a = list(input())
    if a == ['0']: break
    b = a[:]
    b.reverse()
    print(a, b)
    if a == b: print("yes")
    else: print("no")