from collections import deque
def round(lst):
    lst.pop()
    a = lst.pop()
    lst.appendleft(a)
    return lst

n = int(input())
lst = deque()
for i in range(n):
    lst.append(n - i)
while len(lst) != 1:
    lst = round(lst)

print(lst[0])