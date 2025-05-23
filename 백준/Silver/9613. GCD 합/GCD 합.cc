#include <iostream>
#include <algorithm>

using namespace std;

int GCD(int a, int b) {
	a %= b;
	if (a == 0) {
		return b;
	}
	else
		return GCD(b, a);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int arr[101] = { 0, };
		int k;
		long long int res = 0;
		cin >> k;
		for (int j = 0; j < k; j++) {
			cin >> arr[j];
		}

		for (int x = 0; x < k; x++) {
			for (int y = x + 1; y < k; y++) {
				if (x == y) continue;
				res += GCD(arr[x], arr[y]);
			}
		}
		cout << res << "\n";
	}
}