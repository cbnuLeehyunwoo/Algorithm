#include <iostream>

using namespace std;

int main() {
	int N = 0;
	int M = 0;

	cin >> N >> M;

	if ((N * 100) >= M) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}