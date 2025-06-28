#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int a, b;
		cin >> a >> b;
		int c = 2 * b - a;
		cout << c << " " << b - c << "\n";
	}
}