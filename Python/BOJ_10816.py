n = int(input())
lst_1 = input().split()
dct = dict()
for i in lst_1:
    if i in dct.keys():
        dct[i] += 1
    else:
        dct[i] = 1
m = int(input())
lst_2 = input().split()
strg = ''
for i in lst_2:
    if i in dct.keys():
        strg += str(dct[i]) + ' '
    else:
        strg += '0 '
print(strg)