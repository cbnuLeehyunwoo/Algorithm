#include <iostream>
#include <string>

using namespace std;

int main() {
	int n = 0;
	int score = 0;
	cin >> n;
	int strk = 0;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		if (input == 0) {
			strk = 0;
		}
		else if (input == 1) {
			score += 1 + strk;
			strk++;
		}
	}
	cout << score;
}