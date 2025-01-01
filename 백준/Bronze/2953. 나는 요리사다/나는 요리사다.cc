#include <iostream>

using namespace std;

int main() {
	int max_index = 0;
	int max = -1;
	for (int i = 0; i < 5; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int temp = a + b + c + d;
		if (max < temp) {
			max = temp;
			max_index = i;
		}
	}
	cout << max_index + 1 << " " << max;
}