n = int(input())
input_lst = list(input())
ret = 0
for i in range(n):
    ret += (ord(input_lst[i]) - 96) * (31 ** i)
    ret %= 1234567891
print(ret)