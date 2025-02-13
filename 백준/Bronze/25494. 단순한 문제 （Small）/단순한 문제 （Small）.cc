#include <iostream>
#include <string>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int cnt;
	for (int l = 0; l < n; l++) {
		cnt = 0;
		int a, b, c;
		cin >> a >> b >> c;
		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= b; j++) {
				for (int k = 1; k <= c; k++) {
					if ((i % j) == (j % k) && (j % k) == (k % i)) {
						cnt++;
					}
				}
			}
		}
		cout << cnt << "\n";
	}

}