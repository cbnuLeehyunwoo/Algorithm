import sys

m, y = map(int, sys.stdin.readline().rstrip().split())
dp =[]
dp.append(m)
dp.append(int(m*(105/100)))
dp.append(int(dp[1]*(105/100)))
dp.append(int(m*(120/100)))
dp.append(max(int(dp[3]*(105/100)), int(dp[1]*(120/100))))
def money(y):
    if y <len(dp) and y>0:
        return dp[y]
    elif y <=0:
        return dp[0]
    else:
        dp.append(max(int(money(y-5)*(135/100)),
                        int(money(y-3)*(120/100)), 
                        int(money(y-1)*(105/100))))
        return dp[y]

print(money(y))