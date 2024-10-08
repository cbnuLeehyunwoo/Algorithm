#include <iostream>

using namespace std;

int main() {
	unsigned long long int N = 0;
	unsigned long long int M = 0;
	cin >> N >> M;
	if (N % M == 0) {
		cout << "Yes";
	}

	else {
		cout << "No";
	}
}