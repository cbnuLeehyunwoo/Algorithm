#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {  
	ios::sync_with_stdio(false);    // 시간단축을 위해 비동기식으로 정의
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	int sum = 0;
	cin >> N;
	vector<int> v(N);

	if (N == 0) {
		cout << 0 << "\n";
		return 0;
	}
	int except = round(N * 0.15);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (int i = except; i < N - except; i++) {
		sum += v[i];
	}
	int average = round(static_cast<float>(sum) / (N - 2 * except));   // 계산 시 정수 나눗셈으로 인해 소수점이 버려져서 static_cast 사용 후 반올림
	cout << average << "\n";
}