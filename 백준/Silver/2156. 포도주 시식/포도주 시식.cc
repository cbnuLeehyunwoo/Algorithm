// 1번째 포도주까지의 최댓값 = 1번째 포도주의 값
// 2번째 포도주까지의 최댓값 = 1번째 포도주의 값 + 2번째 포도주의 값
// 3번째 포도주까지의 최댓값 = 1번째 포도주의 값 + 3번째 포도주의 값, 또는 2번째 포도주의 값 + 3번째 포도주의 값
// 4번째 포도주까지의 최댓값 = 1번째 포도주까지의 최댓값 + 2번 + 4번, 또는 2번까지의 최댓값 + 4번 
// 5번째 포도주까지의 최댓값 = 2번째 포도주까지의 최댓값 + 4번 + 5번 또는 3번까지의 최댓값 + 5번 또는 4번째 포도주까지의 최댓값
// N번째 포도주까지의 최댓값 = 
// 1. (N - 3)번째 포도주까지의 최댓값 + (N - 1)번 + N번
// 2. (N - 2)번째 포도주까지의 최댓값 + N번
// 3. (N - 1)번째 포도주까지의 최댓값
// 이라고 할 수 있다. 

#include <iostream>

#define SIZE 10002  
using namespace std;
int Wine[SIZE] = { 0, }; // N번째 포도주 잔의 양
int Yang[SIZE] = { 0, }; // N번째 포도주 잔까지의 와인최대 양
int Max(int a, int b, int c) {
	int max = -1;
	int arr[3] = { a, b, c };
	for (int i = 0; i < 3; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	int N = 0; // 포도주 잔의 개수
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> Wine[i];
	}
	Yang[1] = Wine[1];
	if (N > 1) {
		Yang[2] = Wine[1] + Wine[2];
	}

	for (int i = 3; i <= N; i++) {
		Yang[i]= Max(Yang[i - 3] + Wine[i - 1] + Wine[i], Yang[i - 2] + Wine[i], Yang[i - 1]);
	}
	cout << Yang[N];
	return 0;
}

