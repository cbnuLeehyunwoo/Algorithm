#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int dp[100001];
    memset(dp, -1, sizeof(dp));
    dp[0] = -1;
    dp[1] = -1;
    dp[2] = 1;
    dp[3] = -1;
    dp[4] = 2;
    dp[5] = 1;
    dp[6] = 3;
    dp[7] = 2;
    dp[8] = 4; // 초기값 정리
    for (int i = 9; i <= n; i++) {
        dp[i] = dp[i - 5] + 1; // 5개 단위로 한 개씩 늘어남 
    }
    cout << dp[n];
    return 0;
}