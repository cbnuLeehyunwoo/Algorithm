#include <iostream>

using namespace std;

int main() {
	int A, B;
	// 용태, 유진의 시작 손가락 수
	cin >> A >> B;
	// 용태의 턴 부터 시작
	bool yt_turn = true;
	while (true) {

		if (A >= 5) {
			cout << "yj";
			return 0;
		}
		if (B >= 5) {
			cout << "yt";
			return 0;
		}
		if (yt_turn) {
			B += A;
			yt_turn = false;
		}
		else {
			A += B;
			yt_turn = true;
		}
	}
}