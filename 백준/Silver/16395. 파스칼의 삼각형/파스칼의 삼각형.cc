#include <iostream>

using namespace std;

unsigned long long comb(int n, int k) {
	if (k > n - k) k = n - k;
	unsigned long long res = 1;
	for (int i = 1; i <= k; i++) {
		res = res * (n - i + 1) / i;
	}
	return res;
}
int main() {
	int n, k;
	cin >> n >> k;
	n--;
	k--;
	cout << comb(n, k);
	
}