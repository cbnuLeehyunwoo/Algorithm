import sys
input = sys.stdin.readline
end = 0
str = []
for i in range(0,100):
    temp = input().rstrip("\n")
    if(temp != ""):
        end = i
    str.append(temp)

for i in range(0, end + 1):
    print(str[i])