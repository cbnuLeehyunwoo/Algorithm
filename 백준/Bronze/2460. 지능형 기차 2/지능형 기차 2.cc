#include <iostream>

using namespace std;

int main() {
	int sum = 0;
	int max = -1;
	for (int i = 0; i < 10; i++) {
		int in, out;
		cin >> out >> in;
		sum = sum + in - out;
		if (sum > max) max = sum;
	}
	cout << max;
}