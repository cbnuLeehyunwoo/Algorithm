#include <iostream>

using namespace std;

int main() {
	int T, N, F = 0;
	cin >> T >> N;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		F += temp;
	}
	if (F >= T) {
		cout << "Padaeng_i Happy";
	}
	else
		cout << "Padaeng_i Cry";
}