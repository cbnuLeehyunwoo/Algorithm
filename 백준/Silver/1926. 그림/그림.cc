#include <iostream>
#include <queue>
#define SIZE 501
using namespace std;
queue<pair<int, int>> q;

int grid[SIZE][SIZE];
int hop[SIZE][SIZE];
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int mx = 0;
int res = 0;
int cnt = 0;
int n, m;
void init() {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			hop[i][j] = 0;
		}
	}
}

void bfs(int x, int y) {
	cnt = 0;
	q.push({ x, y });
	hop[x][y] = 1;
	while(!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		cnt++;

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (grid[nx][ny] == 1 && hop[nx][ny] == 0
				&& nx >= 0 && ny >= 0 && nx < m && ny < n) {
				q.push({ nx, ny });
				hop[nx][ny] = hop[x][y] + 1;
				if (hop[nx][ny] > mx) {
					mx = hop[nx][ny];
				}
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
			if (grid[i][j] == 1 && hop[i][j] == 0) {
				bfs(i, j);
				if (mx < cnt) {
					mx = cnt;
				}
				res++;
			}
		}
	}

	cout << res << "\n" << mx;
}