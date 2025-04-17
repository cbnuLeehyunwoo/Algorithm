#include <iostream>
using namespace std;

bool is_prime(int x) {
	if (x == 1) return false;
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		bool flag = false;
		for (int i = 1; i < a && !flag; i++) {
			if (is_prime(i) && is_prime(a - i)) {
				flag = true;
			}
		}
		if (flag) {
			cout << "Yes\n";
		}
		else
			cout << "No\n";
	}
}