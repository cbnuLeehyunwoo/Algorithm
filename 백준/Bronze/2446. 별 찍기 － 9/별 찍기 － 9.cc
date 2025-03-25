#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {

		for (int k = 0; k < i; k++) {
			cout << " ";
		}

		for (int j = 2 * (n - i - 1); j >= 0; j--) {
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 1; i < n; i++) {
		for (int j = n - i; j > 1; j--) {
			cout << " ";
		}

		for (int k = 0; k <= 2 * i; k++) {
			cout << "*";
		}
		cout << "\n";
	}
}