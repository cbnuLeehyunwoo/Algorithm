#include <iostream>

using namespace std;

int main() {
	int cu, du;
	cin >> cu >> du;
	int cd, dd;
	cin >> cd >> dd;
	int cp, dp;
	cin >> cp >> dp;
	int H = 0;
	cin >> H;
	// 시작하자마자 레이드가 완료된 경우
	//if (du + dd + dp >= H) {
	//	cout << "0";
	//	return 0;
	//}
	for (int i = 0; i < 5001; i++) {
		if (i % cu == 0) {
			H -= du;
		}
		if (i % cd == 0) {
			H -= dd;
		}
		if (i % cp == 0) {
			H -= dp;
		}

		if (H <= 0) {
			cout << i;
			return 0;
		}
	}
}