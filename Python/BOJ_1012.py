n = int(input())
for _ in range (n):
    m, n, k = map(int, input().split())
    lst_input = list()
    for i in range(k):
        num1, num2 = map(int, input().split())
        lst_input.append([num1, num2, 0])
    lst_sorted = list(sorted(lst_input, key=lambda x : (x[0],x[1])))
    count = 0
    for i in range(k):
        a = lst_sorted[i][0]
        b = lst_sorted[i][1]
        if [a + 1, b, 1] not in lst_sorted and [a - 1, b, 1] not in lst_sorted and [a, b + 1, 1] not in lst_sorted and [a, b - 1, 1] not in lst_sorted:
            count += 1
            lst_sorted[i][2] = 1
        else:
            lst_sorted[i][2] = 1
    print(count)