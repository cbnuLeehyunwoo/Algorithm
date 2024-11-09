#include <iostream>

using namespace std;
long long fibo(int N) {
	if (N == 0) {
		return 0;
	}
	if (N == 1) {
		return 1;
	}
	long long prev = 1;  // 1번째 값으로 초기화
	long long prevprev = 0; // 0번째 값으로 초기화
	for (int i = 2; i <= N; i++) { // 값을 항상 2개씩 들고다니면서 이전값을 계산할 필요없게함
		long long current = prev + prevprev; // 현재값을 업데이트
		prevprev = prev; // 전값이 이제  전전값이 되고
		prev = current;  // 현재값을 전값으로 만들고 반복문을 돈다
	}
	return prev;  // 마지막에 구한 현재값을 리턴
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n = 0;
	cin >> n;
	cout << fibo(n);
}