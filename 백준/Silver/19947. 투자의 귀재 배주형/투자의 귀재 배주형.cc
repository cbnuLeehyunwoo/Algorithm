#include <iostream>

using namespace std;

int dp[11];

void build_dp(int x, int y) {
	dp[0] = x;
	dp[1] = x * 1.05;
	dp[2] = dp[1] * 1.05;
	dp[3] = x * 1.20;
	dp[4] = dp[1] * 1.2;
	for (int i = 5; i <= y; i++) {
		int temp1 = dp[i - 5] * 1.35;
		int temp2 = dp[i - 3] * 1.2;
		int temp3 = dp[i - 1] * 1.05;
		dp[i] = max(max(temp1, temp2), temp3);
	}
}


int main() {
	int h, y;
	cin >> h >> y;
	build_dp(h, y);
	cout << dp[y];
}