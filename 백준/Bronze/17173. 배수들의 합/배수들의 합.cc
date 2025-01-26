#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int arr[1001] = { 0, };
	int res = 0;
	bool istrue[1001] = { 0, };
	for (int i = 0; i < m; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < m; i++) {
		for (int j = arr[i]; j <= n; j += arr[i]) {
			istrue[j] = true;
		}
	}

	for (int i = 1; i <= n; i++) {
		if(istrue[i]) {
			res += i;
		}
	}

	cout << res;
}