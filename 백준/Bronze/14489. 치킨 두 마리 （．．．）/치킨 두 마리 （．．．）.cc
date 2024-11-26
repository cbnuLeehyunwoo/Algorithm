#include <iostream>
#include <string>

using namespace std;

int main() {
	unsigned int A;
	unsigned int B;
	unsigned int C;
	cin >> A >> B;
	cin >> C;
	if (A + B < 2 * C) {
		cout << A + B;
	}
	else {
		cout << A + B - (2 * C);
	}
}