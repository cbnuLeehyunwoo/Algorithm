#include <iostream>
using namespace std;

int main() {
	int N, X;
	cin >> N >> X;
	int max_S = -1;

	for (int i = 0; i < N; i++) {
		int S, T;
		cin >> S >> T;
		if (S + T <= X && S > max_S) {
			max_S = S;
		}
	}
	if (max_S == -1) {
		cout << -1;
	}
	else {
		cout << max_S;
	}

}