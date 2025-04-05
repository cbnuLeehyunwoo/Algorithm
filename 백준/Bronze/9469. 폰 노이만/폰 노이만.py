import sys
input = sys.stdin.readline

t = int(input().rstrip())
for i in range(t):
    li = list(map(float, input().split()))
    print(f"{li[0]} {li[4] * (li[1] / (li[2] + li[3]))}")