from itertools import permutations
import sys
input = sys.stdin.readline
n = int(input().rstrip())
arr = list(range(1, n + 1))
for perm in permutations(arr):
    print(*perm)