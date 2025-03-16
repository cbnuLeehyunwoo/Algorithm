import sys
input = sys.stdin.read

n, m = map(int, input().split())
sys.stdout.write(f"{n // m}\n{n % m}\n")
