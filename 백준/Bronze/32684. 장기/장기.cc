#include <iostream>

using namespace std;

int main() {
	int a[6];
	int b[6];
	double res_a = 0;
	double res_b = 1.5;
	for (int i = 0; i < 6; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 6; i++) {
		cin >> b[i];
	}
	res_a += a[0] * 13;
	res_b += b[0] * 13;
	res_a += a[1] * 7;
	res_b += b[1] * 7;
	res_a += a[2] * 5;
	res_b += b[2] * 5;
	res_a += a[3] * 3;
	res_b += b[3] * 3;
	res_a += a[4] * 3;
	res_b += b[4] * 3;
	res_a += a[5] * 2;
	res_b += b[5] * 2;
	if (res_a > res_b) {
		cout << "cocjr0208";
	}
	else cout << "ekwoo";
}