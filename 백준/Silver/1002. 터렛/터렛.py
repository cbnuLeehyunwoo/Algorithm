import math
import sys
T = int(sys.stdin.readline())
for i in range(T):
    x1,y1,r1,x2,y2,r2 = map(int,sys.stdin.readline().split())
    d = math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
    sum_r = r2 + r1
    min_r = abs(r1 - r2)
    if d == 0 and r1 == r2:
        print(-1)
    elif d > sum_r:
        print(0)
    elif d < min_r:
        print(0)
    elif d == sum_r:
        print(1)
    elif d == min_r:
        print(1)
    else:
        print(2)
