// 입력받은 수 N에서 어떤 연산을 해야 최단횟수가 되는지 알기 어려움
// 1부터 N까지의 수를 1까지 만들며 최단횟수를 탐색.
// 동적 프로그래밍을(dp)를 사용하여 문제 해결. 
// 시간복잡도 O(N)

#include <iostream>
#include <algorithm>

using namespace std;
int toONE[1000001];

int main() {
	int N = 0;
	cin >> N;

	toONE[1] = 0;    // 예외 경우 배열에 미리 대입
	toONE[2] = 1;
	toONE[3] = 1;
	
	for (int i = 4; i <= N; i++) {   // 4부터 입력 숫자까지 전부 탐색
		toONE[i] = toONE[i - 1] + 1; // 우선 -1을 수행하는 경우 대입

		if (i % 2 == 0) {                         // 2로 나누어 지는 경우
			if (toONE[i] > toONE[i / 2] + 1){
				toONE[i] = toONE[i / 2] + 1;
			}
		}
		if (i % 3 == 0) {					      // 3으로 나누어 지는 경우
			if (toONE[i] > toONE[i / 3] + 1) {
				toONE[i] = toONE[i / 3] + 1;
			}
		}


	}
	cout << toONE[N];
}