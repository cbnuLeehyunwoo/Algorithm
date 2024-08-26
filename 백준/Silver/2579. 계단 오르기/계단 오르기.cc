// 1번 계단까지의 최댓값 = 1번 계단의 점수
// 2번 계단까지의 최댓값 = 1번 계단의 점수 + 2번 계단의 점수
// 3번 계단까지의 최댓값 = 1번 + 3번 또는 2번 + 3번 
// 4번 계단까지의 최댓값 = 1번까지의 최댓값 + 2번 + 4번 또는 2번까지의 최댓값 + 4번
// 5번 계단까지의 최댓값 = 2번까지의 최댓값 + 4번 + 5번 또는 3번까지의 최댓값 + 5번
// N번 계단까지의 최댓값 = N - 3번 계단까지의 최댓값 + (N - 1)계단의 값 + N번 계단의 값 또는 N - 2번 계단까지의 최댓값 + N번 계단의 값

#include <iostream>

#define MAX 302
using namespace std;

int main() {
	int N = 0; // 계단의 개수
	int stair[MAX] = { 0, }; // 각 계단의 값을 저장하는 배열
	int score[MAX] = { 0, }; // 각 계단까지의 최대점수를 저장하는 배열
	cin >> N;
	for (int i = 1; i <= N; i++) {  // ~번 계단과 매치되도록 0번 인덱스를 제외하고 입력
		cin >> stair[i];
	}
	score[1] = stair[1];           
	score[2] = stair[1] + stair[2];
	for (int i = 3; i <= N; i++) {
		if (score[i - 3] + stair[i] + stair[i - 1] >= score[i - 2] + stair[i]) {  // 두 경우 중에 반드시 최댓값이 있기 때문에 두 값을 비교하여 큰 값을 score 배열에 저장
			score[i] = score[i - 3] + stair[i] + stair[i - 1];
		}
		else {
			score[i] = score[i - 2] + stair[i];
		}
	}
	cout << score[N];
	return 0;
}