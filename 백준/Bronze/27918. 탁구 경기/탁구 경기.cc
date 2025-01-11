#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	int N = 0;
	char input;
	int score_d = 0;
	int score_p = 0;

	cin >> N;
	for (int i = 0; i < N; i++) {

		cin >> input;
		if (input == 'D') {
			score_d++;
		}
		else 
			score_p++;

		if (abs(score_d - score_p) > 1) {
			break;
		}
	}
	cout << score_d << ":" << score_p;
	return 0;
}