import sys
while True:
    lst = list(sys.stdin.readline())
    lst.pop()
    if lst[0] == '.' and len(lst) == 1:
        break
    stack_small = list()
    for i in lst:
        if i == '(' or i == '[':
            stack_small.append(i)
        elif i == ')':
            if len(stack_small) != 0 :
                if stack_small[-1] == '(':
                    stack_small.pop()
                else:
                    break
            else:
                break
        elif i == ']':
            if len(stack_small) != 0 :
                if stack_small[-1] == '[':
                    stack_small.pop()
                else:
                    break
            else:
                break
        
    if i == lst[len(lst) - 1] and len(stack_small) == 0:
        print('yes')
    else:
        print('no')