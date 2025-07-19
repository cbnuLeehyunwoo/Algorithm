#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int temp;
		cin >> temp;
		if (temp > 4500) {
			cout << "Case #" << i << ": Round " << 1 << "\n";
		}
		else if (temp > 1000) {
			cout << "Case #" << i << ": Round " << 2 << "\n";
		}
		else if (temp > 25) {
			cout << "Case #" << i << ": Round " << 3 << "\n";
		}
		else cout << "Case #" << i << ": World Finals" << "\n";
	}
}