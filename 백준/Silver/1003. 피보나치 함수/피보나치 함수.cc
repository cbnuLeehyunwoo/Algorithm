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
	
	int N = 0;
	cin >> N; // 입력받을 케이스의 수
	for (int i = 0; i < N; i++) {
		int M = 0;
		cin >> M;
		// N 값의 증가에 따른 0, 1출력은 다음과 같다
		// N 값 0 1 2 3 4 5 6
		//0개수 1 0 1 1 2 3 5
		//1개수 0 1 1 2 3 5 8
		// 0의 개수는 N이 1값일때부터 시작되는 피보나치 수와 같고
		// 1의 개수는 N이 0값일때부터 시작되는 피보나치 수와 같다.
		cout << fibo(M - 1) << " " << fibo(M) << "\n";
	}
}