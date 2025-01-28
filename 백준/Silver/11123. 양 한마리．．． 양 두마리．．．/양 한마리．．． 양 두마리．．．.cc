#include <iostream>
#include <queue>
#include <string>

#define SIZE 101
using namespace std;

char map[SIZE][SIZE];
bool visited[SIZE][SIZE];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
queue<pair<int, int>> q;

int t;
int h, w;
int cnt;

void init() {
	cnt = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			map[i][j] = 0;
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
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (0 <= nx && 0 <= ny && nx < h && ny < w && !visited[nx][ny] && map[nx][ny] == '#') {
				q.push({ nx, ny });
				visited[nx][ny] = true;
			}
		}
	}
}
int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w;
		init();
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> map[i][j];
			}
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++)
			{
				if (!visited[i][j] && map[i][j] == '#') {
					bfs(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
}