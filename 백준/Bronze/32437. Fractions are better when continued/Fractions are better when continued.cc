#include <iostream>

using namespace std;
long long dp[491];

void buildDP() {
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= 490; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
}


int main() {
	buildDP();
	int n;
	cin >> n;
	cout << dp[n];
}