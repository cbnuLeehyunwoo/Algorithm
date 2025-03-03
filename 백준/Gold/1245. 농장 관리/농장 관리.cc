#include <iostream>
#include <queue>
#define SIZE 101
using namespace std;
queue<pair<int, int>> q;
int grid[SIZE][SIZE];
bool visited[SIZE][SIZE];
int dx[8] = { 0, 0, -1, -1, -1, 1, 1, 1 };
int dy[8] = { 1, -1, 1, -1, 0, 1, -1, 0 };
int cnt = 0;
bool is_top = true;
int n, m;
void bfs(int x, int y) {
	q.push({ x, y });
	visited[x][y] = true;

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 8; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
			if (grid[x][y] < grid[nx][ny]) is_top = false;
			if (visited[nx][ny]) continue;
			if (grid[x][y] == grid[nx][ny]) {
				visited[nx][ny] = true;
				q.push({ nx, ny });
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> grid[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (visited[i][j]) continue;
			is_top = true;
			bfs(i, j);
			if (is_top)cnt++;
		}
	}
	cout << cnt;
}