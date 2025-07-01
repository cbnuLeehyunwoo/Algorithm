#include <iostream>
#include <queue>
#include <algorithm>
#define SIZE 51

using namespace std;
queue<pair<int, int>> q;

int grid[SIZE][SIZE];
bool visited[SIZE][SIZE];
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int M, N, K, res;

void init() {
	fill(&visited[0][0], &visited[0][0] + 50 * 50, false);
	fill(&grid[0][0], &grid[0][0] + 50 * 50, 0);
	queue<pair<int, int>> q;
	res = 0;
}

void bfs(int x, int y) {
	visited[x][y] = true;
	q.push({ x, y });
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && ny >= 0 && nx < M && ny < N &&
				grid[nx][ny] == 1 && !visited[nx][ny]) {
				visited[nx][ny] = true;
				q.push({ nx, ny });
			}
		}
	}
}

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		init();
		cin >> M >> N >> K;
		for (int j = 0; j < K; j++) {
			int a, b;
			cin >> a >> b;
			grid[a][b] = 1;
		}
		for (int x = 0; x < M; x++) {
			for (int y = 0; y < N; y++) {
				if (grid[x][y] == 1 && !visited[x][y]) {
					bfs(x, y);
					res++;
				}
			}
		}
		cout << res << "\n";
	}
	
}