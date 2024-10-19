#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	unsigned long long int result = 1;

	for (int i = n; i >= 1; i--) {
		result *= i;
	}
	cout << result;
}