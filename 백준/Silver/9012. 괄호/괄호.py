n = int(input())

for _ in range(n):
    s = input()
    cnt = 0
    is_valid = True

    for c in s:
        if c == '(':
            cnt += 1
        elif c == ')':
            cnt -= 1
            if cnt < 0:
                is_valid = False
                break

    if is_valid and cnt == 0:
        print("YES")
    else:
        print("NO")
