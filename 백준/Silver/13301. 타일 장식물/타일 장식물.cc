#include <iostream>

using namespace std;
int n;
unsigned long long fibo[81];


void build_DP() {
	fibo[0] = 0;
	fibo[1] = 1;
	fibo[2] = 1;
	for (int i = 3; i <= n; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
}


int main() {

	cin >> n;
	build_DP();
	if (n == 1) {
		cout << 4;
	}
	else if (n == 2) {
		cout << 6;
	}
	else cout << 2 * (fibo[n] + fibo[n] + fibo[n - 1]);
}