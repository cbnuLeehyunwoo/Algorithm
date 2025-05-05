import sys

input = sys.stdin.readline

while True:
    line = input().rstrip()
    if line == ".":
        break
    stack = []
    is_valid = True  
    for c in line:
        if c == '(' or c == '[':
            stack.append(c)
        elif c == ')':
            if not stack or stack[-1] != '(':
                is_valid = False
                break
            stack.pop()
        elif c == ']':
            if not stack or stack[-1] != '[':
                is_valid = False
                break
            stack.pop()
    if stack:
        is_valid = False
    print("yes" if is_valid else "no")
