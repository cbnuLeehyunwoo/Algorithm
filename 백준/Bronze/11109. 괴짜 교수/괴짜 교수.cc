#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int d, n, s, p;
		cin >> d >> n >> s >> p;
		if (d + n * p > n * s) cout << "do not parallelize\n";
		else if (d + n * p < n * s) cout << "parallelize\n";
		else cout << "does not matter\n";
	}
}