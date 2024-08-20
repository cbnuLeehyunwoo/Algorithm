#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int N = 0;    // 손님의 수
	int time = 0;  // 입력받을 시간(분)
	int timeforAll = 0;  // 총 걸리는 시간(분)
	cin >> N;
	vector<int> sonnim;
	for (int i = 0; i < N; i++) {
		cin >> time;
		sonnim.push_back(time);  // 손님 벡터에 시간을 입력
	}

	sort(sonnim.begin(), sonnim.end());
	
	for (int i = 0; i < N; i++) {
		timeforAll = timeforAll + sonnim[i] * (N - i);  // 첫번째 손님 시간 * N + 두번째 손님 시간 * N - 1 +...+ N번째 손님 시간 * 1 의 형태로 계산
	}
	cout << timeforAll;

	return 0;
}
