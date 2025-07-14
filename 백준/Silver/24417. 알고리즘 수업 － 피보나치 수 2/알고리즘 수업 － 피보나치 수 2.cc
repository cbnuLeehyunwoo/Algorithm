#include <iostream>

using namespace std;

void buildDP(int n) {
	long long prev = 1;
	long long prevprev = 1;
	long long dp = 2;
	for (int i = 3; i <= n; i++) {;
		dp = (prev + prevprev) % 1000000007;
		prevprev = prev;
		prev = dp;
	}
	cout << dp << " " << n - 2;
}

int main() {
	int n;
	cin >> n;
	buildDP(n);
}