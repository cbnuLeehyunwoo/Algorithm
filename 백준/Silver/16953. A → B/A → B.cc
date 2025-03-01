#include <iostream>

using namespace std;

int main() {
	int a, b;
	int cnt = 1;
	cin >> a >> b;
	while (b > a) {
		if (b % 2 == 0) {
			b /= 2;
			cnt++;
		}
		else if ((b - 1) % 10 == 0) {
			b = (b - 1) / 10;
			cnt++;
		}
		else break;
	}
	if (b == a) {
		cout << cnt;
	}
	else
		cout << -1;
}