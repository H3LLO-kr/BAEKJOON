n = int(input())
ret = ''
stack = list()
cursor = 1
for i in range(n):
    num = int(input())
    if len(stack) == 0 or stack[-1] < num:
        while cursor < num:
            stack.append(cursor)
            cursor += 1
            ret += '+\n'
        cursor += 1
        ret += '+\n-\n'
    elif stack[-1] == num:
        stack.pop()
        ret += '-\n'
    else:
        break
if i == n - 1:
    print(ret, end='')
else:
    print('NO')