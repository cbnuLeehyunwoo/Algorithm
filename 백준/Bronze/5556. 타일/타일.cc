#include <iostream>

using namespace std;
int main() {
	int n = 0;
	cin >> n;
	int k = 0;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int x, y;
		cin >> x >> y;
		cout << (min(min(x, n - x + 1), min(y, n - y + 1)) - 1) % 3 + 1 << '\n';
	}
}