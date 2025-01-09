#include <iostream>
#include <string>
using namespace std;

int main() {
	int b_score = 0;
	int w_score = 0;
	for (int i = 0; i < 8; i++) {
		string input;
		cin >> input;
		for (int j = 0; j < 8; j++) {
			if (input[j] == '.') {
				continue;
			}
			else if (input[j] == 'K') {
				w_score += 0;
			}
			else if (input[j] == 'P') {
				w_score += 1;
			}
			else if (input[j] == 'N') {
				w_score += 3;
			}
			else if (input[j] == 'B') {
				w_score += 3;
			}
			else if (input[j] == 'R') {
				w_score += 5;
			}
			else if (input[j] == 'Q') {
				w_score += 9;
			}
			else if (input[j] == 'k') {
				b_score += 0;
			}
			else if (input[j] == 'p') {
				b_score += 1;
			}
			else if (input[j] == 'n') {
				b_score += 3;
			}
			else if (input[j] == 'b') {
				b_score += 3;
			}
			else if (input[j] == 'r') {
				b_score += 5;
			}
			else if (input[j] == 'q') {
				b_score += 9;
			}
		}
	}
	cout << w_score - b_score;
}