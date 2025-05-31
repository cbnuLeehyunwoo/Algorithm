#include <iostream>
#define SIZE 1001
using namespace std;

long long dp[SIZE];
void buildDP(int n) {
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
	}
	cout << dp[n];
}

int main() {
	int n;
	cin >> n;
	buildDP(n);
}