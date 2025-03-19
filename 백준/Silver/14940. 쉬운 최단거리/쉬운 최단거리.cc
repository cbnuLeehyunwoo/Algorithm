#include <iostream>
#include <queue>
#define SIZE 1001
using namespace std;
queue<pair<int, int>> q;
int grid[SIZE][SIZE];
int hop[SIZE][SIZE];
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int s_x, s_y;
int n, m;
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

			if (grid[nx][ny] == 1 && hop[nx][ny] == -1
				&& nx < n && ny < m && nx >= 0 && ny >= 0) {
				q.push({ nx, ny });
				hop[nx][ny] = hop[x][y] + 1;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	init();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> grid[i][j];
			if (grid[i][j] == 2) {
				s_x = i;
				s_y = j;
			}
		}
	}
	bfs(s_x, s_y);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (hop[i][j] == -1 && grid[i][j] == 0) cout << 0 << " ";
			else if (hop[i][j] == -1 && grid[i][j] == 1) cout << -1 << " ";
			else cout << hop[i][j] << " ";

		}
		cout << "\n";
	}
}