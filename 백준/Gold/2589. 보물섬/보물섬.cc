#include <iostream>
#include <queue>
#define SIZE 51
using namespace std;
queue<pair<int, int>> q;
int n, m;
char grid[SIZE][SIZE];
int hop[SIZE][SIZE];
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };
int mx = -1;

void init() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			hop[i][j] = -1;
		}
	}
}

void bfs(int x, int y) {
	q.push({ x, y });
	hop[x][y] = 0;

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && ny >= 0 && nx < n && ny < m
				&& grid[nx][ny] == 'L' && hop[nx][ny] == -1) {
				q.push({ nx, ny });
				hop[nx][ny] = hop[x][y] + 1;
				if (mx < hop[nx][ny]) {
					mx = hop[nx][ny];
				}
			}
		}
	}
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> grid[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {	
			if (grid[i][j] == 'L') {
				init();
				bfs(i, j);
			}
		}
	}
	cout << mx;
}