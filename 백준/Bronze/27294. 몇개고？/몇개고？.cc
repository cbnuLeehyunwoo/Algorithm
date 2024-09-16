#include <iostream>

using namespace std;

int main() {
	int T = 0;
	int S = 0;
	cin >> T >> S;

	if (T <= 16 && T >= 12 && S == 0) {
		cout << "320";
	}
	else
		cout << "280";
	return 0;
}