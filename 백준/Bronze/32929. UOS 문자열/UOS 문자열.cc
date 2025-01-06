#include <iostream>
#include <string>

using namespace std;

int main() {
	int N = 0;
	cin >> N;
	if (N % 3 == 0) {
		cout << "S";
	}
	else if (N % 3 == 1) {
		cout << "U";
	}
	else {
		cout << "O";
	}
}