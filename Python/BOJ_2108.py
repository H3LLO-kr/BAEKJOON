import sys
n = int(input())
lst_input = list()
for i in range(n):
    lst_input.append(int(input()))
print(round(sum(lst_input) / n))
lst_sorted = sorted(lst_input)
print(lst_sorted[(n + 1) // 2 - 1])
dct_input = dict()
for i in range(n):
    if dct_input.get(lst_sorted[i]):
        dct_input[lst_sorted[i]] += 1
    else:
        dct_input[lst_sorted[i]] = 1
lst_dict = list(sorted(dct_input.items(), key=lambda x : (x[1], -x[0])))
if len(lst_dict) == 1 or lst_dict[-1][1] != lst_dict[-2][1]:
    print(lst_dict[-1][0])
else:
    print(lst_dict[-2][0])
print(lst_sorted[-1] - lst_sorted[0])