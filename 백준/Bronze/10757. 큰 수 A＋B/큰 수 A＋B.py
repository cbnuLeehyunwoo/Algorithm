import sys
print = sys.stdout.write
input = sys.stdin.readline


n, m = map(int, input().split())
print(str(n + m))

