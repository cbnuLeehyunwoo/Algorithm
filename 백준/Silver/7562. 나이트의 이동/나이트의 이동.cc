#include <iostream>
#include <queue>
#define SIZE 301
using namespace std;
int l;
int dx[8]{ 1, 1,-1, -1, 2, 2, -2, -2 };
int dy[8]{ -2, 2, -2, 2, -1, 1, -1, 1 };
int grid[SIZE][SIZE];
int hop[SIZE][SIZE];
int from_x, from_y;
int to_x, to_y;

void init() {
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < l; j++) {
			grid[i][j] = 0;
			hop[i][j] = -1;
		}
	}

}

void bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push({ x, y });
	hop[x][y] = 0;
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		if (x == to_x && y == to_y) {
			cout << hop[x][y] << "\n";
			return;
		}

		for (int i = 0; i < 8; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && ny >= 0 && nx < l && ny < l
				&& hop[nx][ny] == -1) {
				q.push({ nx, ny });
				hop[nx][ny] = hop[x][y] + 1;
			}
		}
	}
}


int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
	
		cin >> l;
		cin >> from_x >> from_y;
		cin >> to_x >> to_y;
		init();
		bfs(from_x, from_y);
	}
}