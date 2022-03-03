import sys
n = int(input())
lst_input = list(map(int, sys.stdin.readline().split()))
lst_num = sorted(set(lst_input))
dct_num = {i:v for v, i in enumerate(lst_num)}
for i in lst_input[:-1]:
    print(str(dct_num[i]) + ' ', end='')
print(dct_num[lst_input[-1]])