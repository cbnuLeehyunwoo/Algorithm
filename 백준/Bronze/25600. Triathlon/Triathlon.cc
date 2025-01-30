#include <iostream>
#include <string>
using namespace std;

int main() {
	int n = 0;
	int max = -1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, d, g;
		int temp;
		cin >> a >> d >> g;
		if (a == (d + g)) {
			temp = a * (d + g) * 2;
		}
		else {
			temp = a * (d + g);
		}
		
		if (temp > max) {
			max = temp;
		}
	}
	cout << max;
}