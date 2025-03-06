#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int i, int j) {
	return j < i;
}

int Euclidean_Gcd(int x, int y) {
	x %= y;
	if (x == 0) {
		return y;
	}
	else
		return Euclidean_Gcd(y, x);
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

		sort(arr, arr + k, compare);

		for (int x = 0; x < k; x++) {
			for (int y = x + 1; y < k; y++) {
				if (x == y) continue;
				res += Euclidean_Gcd(arr[x], arr[y]);
			}
		}
		cout << res << "\n";
	}
}