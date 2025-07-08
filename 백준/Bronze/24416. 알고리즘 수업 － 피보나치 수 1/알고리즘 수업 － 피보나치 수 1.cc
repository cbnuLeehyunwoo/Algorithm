#include <iostream>

using namespace std;
int dp[31];

void buildDP(int n) {
	dp[1] = 1;
	dp[2] = 1;
	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
}


int main() {
	int n;
	cin >> n;
	buildDP(n);
	cout << dp[n] << " " << n - 2;
}