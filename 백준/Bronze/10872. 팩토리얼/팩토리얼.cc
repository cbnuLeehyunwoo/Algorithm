#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;

	int sum = 1;
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	cout << sum;
}