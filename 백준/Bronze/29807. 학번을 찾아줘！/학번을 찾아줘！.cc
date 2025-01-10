#include <iostream>

using namespace std;

int main() {
	int score[6] = { 0, };
	int n = 0;
	int s_num = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}

	if (score[0] > score[2]) {
		s_num += (score[0] - score[2]) * 508;
	}
	else
		s_num += (score[2] - score[0]) * 108;
	
	
	if (score[1] > score[3]) {
		s_num += (score[1] - score[3]) * 212;
	}
	else
		s_num += (score[3] - score[1]) * 305;

	if (score[4] != 0) {
		s_num += score[4] * 707;
	}

	cout << s_num * 4763;
}