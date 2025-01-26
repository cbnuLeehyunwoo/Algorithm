#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k = 0;
		cin >> k;
		cout << "Pairs for " << k << ": ";
		if (k == 2) {
			cout << "\n";
			continue;
		}
		else {
			for (int i = 1; i <= (k - 1) / 2; i++) {
				if (i != (k - 1) / 2) {
					cout << i << " " << k - i << ", ";
				}
				else 
					cout << i << " " << k - i;
			}
			cout << "\n";
		}
	}
}