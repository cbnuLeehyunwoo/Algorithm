#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	double per = 0.0;
	per = a - (a * b * 0.01);
	if (per >= 100) {
		cout << 0;
	}
	else {
		cout << 1;
	}
}