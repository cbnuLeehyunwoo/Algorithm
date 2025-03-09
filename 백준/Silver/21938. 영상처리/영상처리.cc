#include <iostream>
#include <queue>
#define SIZE 1001
using namespace std;
queue<pair<int, int>> q;
int grid[SIZE][SIZE];
int r[SIZE][SIZE];
int g[SIZE][SIZE];
int b[SIZE][SIZE];
bool visited[SIZE][SIZE] = { false, };
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { -1, 1, 0, 0 };

int n, m, t;
int cnt = 0;

void bfs(int x, int y) {
	q.push({ x, y });
	visited[x][y] = true;

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && ny >= 0 && nx < n && ny < m
				&& !visited[nx][ny] && grid[nx][ny] >= 255) {
				q.push({ nx, ny });
				visited[nx][ny] = true;
			}
		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int r, g, b;
			cin >> r >> g >> b;
			grid[i][j] = (r + g + b) / 3;
		}
	}
	cin >> t;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (grid[i][j] >= t) grid[i][j] = 255;
			else grid[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!visited[i][j] && grid[i][j] == 255) {
				bfs(i, j);
				cnt++;
			}
		}
	}

	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < m; j++) {
	//		cout << grid[i][j];
	//	}
	//	cout << "\n";
	//}
	cout << cnt;

}