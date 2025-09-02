#include <iostream>
#include <queue>
#define SIZE 201
using namespace std;
queue<pair<int, int>> q;
int grid[SIZE][SIZE];
int hop[SIZE][SIZE];
int dx[6] = { -2, -2, 0, 0, 2, 2 };
int dy[6] = { -1, 1, -2, 2, -1, 1 };
int n, r1, r2, c1, c2;



void BFS() {
	q.push({ r1, c1 });
	hop[r1][c1] = 0;
	while (!q.empty()) {
		int r = q.front().first;
		int c = q.front().second;
		if (r == r2 && c == c2) {
			cout << hop[r][c];
			return;
		}
		q.pop();

		for (int i = 0; i < 6; i++) {
			int nr = r + dx[i];
			int nc = c + dy[i];

			if (nr >= 0 && nc >= 0 && nr < n && nc < n && hop[nr][nc] == -1) {
				q.push({ nr, nc });
				hop[nr][nc] = hop[r][c] + 1;
			}
		}
	}
	cout << -1;
	return;
}


int main() {
	cin >> n;
	cin >> r1 >> c1 >> r2 >> c2;
	fill(&hop[0][0], &hop[0][0] + SIZE * SIZE, -1);
	BFS();
}