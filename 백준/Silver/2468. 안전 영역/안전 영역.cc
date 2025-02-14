#include <iostream>
#include <queue>
#define SIZE 101

using namespace std;
queue<pair<int, int>> q;
int grid[SIZE][SIZE];
bool visited[SIZE][SIZE];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 }; 
int n;
int lnd_max = -1, top = 0;

int level;
void init()
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			visited[i][j] = false;
		}
	}
}

void bfs(int x, int y)
{
	q.push({ x, y });
	visited[x][y] = true;
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && ny >= 0 && nx < n && ny < n
				&& !visited[nx][ny] && grid[nx][ny] > level) {
				q.push({ nx, ny });
				visited[nx][ny] = true;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> grid[i][j];
			if (grid[i][j] > top) {
				top = grid[i][j];
			}
		}
	}
	for(int k = 0; k < top; k++) {
		init();
		level = k;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (grid[i][j] > level && !visited[i][j]) {
					bfs(i, j);
					cnt++;
				}
			}
		}
		if (cnt > lnd_max) {
			lnd_max = cnt;
		}
	}
	cout << lnd_max;
}