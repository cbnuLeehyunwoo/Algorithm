#include <iostream>

using namespace std;

int main() {
	int N = 0;
	cin >> N;

	for (int i = 1; i < 10; i++) {
		cout << N << " * " << i << " = " << N * i;
		if (i != 9) {
			cout << endl;
		}
	}
	return 0;
}