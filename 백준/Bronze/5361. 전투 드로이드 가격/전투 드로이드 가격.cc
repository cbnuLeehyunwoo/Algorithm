#include <iostream>

using namespace std;

int main() {
	int N = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int A, B, C, D, E;
		cin >> A >> B >> C >> D >> E;
		cout << fixed;
		cout.precision(2);
		cout << "$" << A * 350.34 + B * 230.90 + C * 190.55 + D * 125.30 + E * 180.90 << "\n";
	}
}
