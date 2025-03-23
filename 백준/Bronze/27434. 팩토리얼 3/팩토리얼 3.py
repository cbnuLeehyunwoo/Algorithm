import sys
import math
input = sys.stdin.readline
n = int(input().rstrip())
sum = 1
for i in range(1, n+1):
    sum *= i
print(sum)