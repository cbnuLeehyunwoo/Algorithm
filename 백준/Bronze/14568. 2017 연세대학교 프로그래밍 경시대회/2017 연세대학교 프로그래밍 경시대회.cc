#include <iostream>

using namespace std;

int main() {
	int N = 0; // 사탕의 총 개수
	int cnt = 0; // 유효한 경우 수
	cin >> N;
	for (int i = 1; i < N; i++) // 택희
		for (int j = 1; j < N; j++) { // 영훈
			for (int k = 1; k < N; k++) { // 남규
				if (i + j + k != N) {
					continue;
				}
				if (k < j + 2) {
					continue;
				}
				if (i % 2 == 1) {
					continue;
				}
				//cout << i << endl;
				//cout << j << endl;
				//cout << k << endl;
				//cout << endl;
				cnt++;
			}
		}
	cout << cnt;	
}
