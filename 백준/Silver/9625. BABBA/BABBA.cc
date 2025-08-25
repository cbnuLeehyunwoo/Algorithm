#include <iostream>

using namespace std;
int dp_A[46];
int dp_B[46];
int k;
int res;

void build_DP() {
	dp_A[0] = 1;
	dp_B[0] = 0;
	dp_A[1] = 0;
	dp_B[1] = 1;
	for (int i = 2; i <= k; i++) {
		dp_A[i] = dp_A[i - 1] + dp_A[i - 2];
		dp_B[i] = dp_B[i - 1] + dp_B[i - 2];
	}
	cout << dp_A[k] << " " << dp_B[k];
}

int main() {
	cin >> k;
	build_DP();
}