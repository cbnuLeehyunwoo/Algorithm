#include <iostream>
#include <string>

using namespace std;

int main() {
	unsigned long long int k;
	int n;
	int cnt = 0;
	cin >> n >> k;
	int coin[11] = { 0, };
	for (int i = n - 1; i >= 0; i--) {
		cin >> coin[i];
	}
	while (true) {
		if (k == 0) {
			cout << cnt;
			return 0;
		}
		for (int i = 0; i < n; i++) {
			if (k >= coin[i]) {
				k -= coin[i];
				cnt++;
				break;
			}
		}
	}
}