#include <iostream>

using namespace std;
using ull = unsigned long long;

ull dp[117];

void fibo(int n) {
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	for (int i = 4; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 3];
	}
}

int main() {
	int n = 0;
	cin >> n;
	fibo(n);
	cout << dp[n];
}