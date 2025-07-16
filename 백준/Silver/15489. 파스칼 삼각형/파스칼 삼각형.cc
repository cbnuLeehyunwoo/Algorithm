
#include <iostream>

using namespace std;

int grid[31][31];

void buildDP() {
	for (int i = 0; i < 31; i++) {
		grid[i][i] = 1;
		grid[i][0] = 1;
	}

	for (int i = 1; i < 31; i++) {
		for (int j = 1; j <= i; j++) {
			grid[i][j] = grid[i - 1][j - 1] + grid[i - 1][j];
		}
	}
}

int main() {
	buildDP();
	int sum = 0;
	int R, C, W;
	cin >> R >> C >> W;
	for (int i = 0; i < W; i++) { // 삼각형의 높이
		for (int j = 0; j <= i; j++) { // 현재 줄의 너비
			sum += grid[(R - 1) + i][(C - 1) + j];
		}
	}
	cout << sum;
}