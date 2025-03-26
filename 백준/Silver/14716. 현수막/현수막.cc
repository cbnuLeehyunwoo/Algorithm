#include <iostream>
#include <queue>
#define SIZE 251
using namespace std;
queue<pair<int, int>>q;
int grid[SIZE][SIZE];
bool visited[SIZE][SIZE];
int dx[8] = { 0, 0, 1, 1, 1, -1, -1, -1 };
int dy[8] = { 1, -1, 0, 1, -1, 0, 1, -1 };
int m, n;
int cnt = 0;
void init() {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			visited[i][j] = false;
		}
	}
}

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
			if (nx >= 0 && ny >= 0 && nx < m && ny < n
				&& !visited[nx][ny] && grid[nx][ny] == 1) {
				q.push({ nx, ny });
				visited[nx][ny] = true;
			}
		}
	}

}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> m >> n;
	init();
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> grid[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (grid[i][j] == 1 && !visited[i][j]) {
				bfs(i, j);
				cnt++;
			}
		}
	}
	cout << cnt;
}

