import sys
n = int(sys.stdin.readline())
m = int(sys.stdin.readline())
str = sys.stdin.readline()
pn = ''
count = 0
for i in range(n):
    pn += "IO"
pn += "I"
for i in range(m - (2 * n + 1) + 1):
    if str[i] == 'I':
        if str[i:i + (2 * n + 1)] == pn:
            count += 1
print(count)