#include <iostream>
#include <queue>
#include <algorithm>
#define SIZE 101
using namespace std;
queue<pair<int, int>>q;
int grid[SIZE][SIZE] = { 0, };
bool visited[SIZE][SIZE] = { false, };
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { -1, 1, 0, 0 };
int res[SIZE];
int n, m, k;
int cnt = 0;
int temp_size = 0;
void bfs(int x, int y) {
	temp_size = 0;
	q.push({ x, y });
	visited[x][y] = true;

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		temp_size++;

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (grid[nx][ny] == 0 && !visited[nx][ny]
				&& nx >= 0 && ny >= 0 && nx < n && ny < m) {
				q.push({ nx, ny });
				visited[nx][ny] = true;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> m >> k;
	for (int i = 0; i < k; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = y1; i < y2; i++) {
			for (int j = x1; j < x2; j++) {
				grid[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (grid[i][j] == 0 && !visited[i][j]) {
				bfs(i, j);
				res[cnt] = temp_size;
				cnt++;
			}
		}
	}

	sort(res, res + cnt);

	cout << cnt << "\n";

	for (int i = 0; i < cnt; i++) {
		cout << res[i] << " ";
	}
}