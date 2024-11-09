#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N = 0;
	cin >> N;
	vector<int> DP(N + 1, 100001); // 주어진 범위의 최댓값 + 1로 벡터를 초기화 하여 처음 구한 값은 반드시 들어가게한다.
	DP[0] = 0; // 0은 0개의 항으로도 만들어낼 수 있다
	for (int i = 1; i <= N; i++) { // 입력받은 N까지 반복문
		for (int j = 1; j * j <= i; j++) { // 현재 숫자 N에서의 항 조합 최소를 구하기 위해 현재숫자 N까지 반복
			DP[i] = min(DP[i], DP[i - j * j] + 1); 
			// 항 조합의 최소를 (구하려는 수 - 가장 인접한 제곱수)의 최솟값 + 1로 생각할 수 있겠으나
			// 가장 인접한 제곱수를 빼고 생각하는게 답이 아닌 경우가 존재한다
			// 32의 경우 위의 공식대로 DP[7] + 1이 최솟값이 되어야하지만
			// 16 + 16 이므로 2가 최솟값이다.
			// 그러므로 min(DP[i], DP[i - j * j])를 가지고 순회하며 최솟값을 찾아내야한다..
		}
	}
	cout << DP[N];

}