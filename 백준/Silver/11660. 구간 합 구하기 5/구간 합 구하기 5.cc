#include <iostream>
#define SIZE 1025
using namespace std;
int grid[SIZE][SIZE];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int temp;
	for (int i = 1; i <= n; i++) {
		int sum = 0;
		for (int j = 1; j <= n; j++) {
			cin >> temp;
			grid[i][j] = grid[i - 1][j] + grid[i][j - 1] + temp - grid[i - 1][j - 1];
		}
	}
	int x1, y1, x2, y2;
	
	for (int i = 0; i < m; i++) {
		int result = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		result = grid[x2][y2] - grid[x1 - 1][y2] - grid[x2][y1 - 1] + grid[x1 - 1][y1 - 1];

		cout << result << '\n';
	}

	return 0;
}