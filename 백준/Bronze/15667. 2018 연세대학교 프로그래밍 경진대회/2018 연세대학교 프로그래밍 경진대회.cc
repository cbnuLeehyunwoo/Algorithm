#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int i = 1;
	while (true) {
		if (n == i * (i + 1) + 1) {
			cout << i;
			return 0;
		}
		i++;
	}
}