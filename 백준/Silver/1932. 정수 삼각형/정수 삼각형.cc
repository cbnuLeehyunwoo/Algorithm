#include <iostream>
#include <algorithm>
#define SIZE 501
using namespace std;

int grid[SIZE][SIZE];
int dp[SIZE][SIZE];
int n;
void buildDP() {
	dp[0][0] = grid[0][0];
	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0) dp[i][j] = dp[i - 1][j] + grid[i][j];
			else if (j == i) dp[i][j] = dp[i - 1][j - 1] + grid[i][j];
			else dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + grid[i][j];
		}
	}
	cout << *max_element(&dp[n-1][0], &dp[n-1][n-1] + 1);
}

int main() {
	fill(&grid[0][0], &grid[0][0] + SIZE * SIZE, -1);
	fill(&dp[0][0], &dp[0][0] + SIZE * SIZE, -1);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> grid[i][j];
		}
	}

	buildDP();
}