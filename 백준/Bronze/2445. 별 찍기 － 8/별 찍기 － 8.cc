#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	n--;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}

		for (int j = -1; j <= 2 * (n -1 - i); j++) {
			cout << " ";
		}

		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = n; i >= 0; i--) {
		for (int j = i; j >= 0; j--) {
			cout << "*";
		}

		for (int j = 2 * (n - 1 - i); j >= -1; j--) {
			cout << " ";
		}

		for (int j = i; j >= 0; j--) {
			cout << "*";
		}
		cout << "\n";
	}
}