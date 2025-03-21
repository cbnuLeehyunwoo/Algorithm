#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - i; j > 1; j--) {
			cout << " ";
		}
		cout << "*";
		for (int k = 0; k < 2 * i - 1; k++) {
			cout << " ";
		}
		if(i != 0) cout << "*";
		cout << "\n";
	}
	
	for (int i = 0; i < 2 * n - 1; i++) {
		cout << "*";
	}
}