#include <iostream>

using namespace std;

int main() {
	// 현재 기차 내 사람
	int mans = 0;
	// 최대 사람 수
	int max = -1;
	for (int i = 0; i < 4; i++) {
		// 탄 사람, 내린 사람
		int in, out;
		cin >> out >> in;
		mans -= out;
		mans += in;
		// 현재 사람의 수가 최댓값일 때 
		if (mans > max) {
			// 최댓값 업데이트
			max = mans;
		}
	}
	cout << max;
}