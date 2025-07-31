#include <iostream>
#include <queue>
#include <tuple>
#include <string>
#define SIZE 1001
using namespace std;
int grid[SIZE][SIZE];
int step[SIZE][SIZE][2];
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int a, b;
queue<tuple<int, int, int>> q;
void BFS() {
	step[1][1][0] = 1;
	q.push(make_tuple(1, 1, 0));
	while (!q.empty()) {
		int x = get<0>(q.front());
		int y = get<1>(q.front());
		int brk = get<2>(q.front());
		if (x == a && y == b) {
			cout << step[x][y][brk];
			return;
		}
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx > 0 && ny > 0 && nx <= a && ny <= b &&
				step[nx][ny][brk] == 0) {
				if (brk == 0 && grid[nx][ny] == 1) {
					q.push(make_tuple(nx, ny, 1));
					step[nx][ny][1] = step[x][y][0] + 1;
				}
				else if (brk == 0 && grid[nx][ny] == 0) {
					q.push(make_tuple(nx, ny, 0));
					step[nx][ny][0] = step[x][y][0] + 1;
				}
				else if (brk == 1 && grid[nx][ny] == 0) {
					q.push(make_tuple(nx, ny, 1));
					step[nx][ny][1] = step[x][y][1] + 1;
				}
			}
		}
	}
	cout << -1;
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> b;
	for (int i = 1; i <= a; i++) {
		string row; 
		cin >> row;
		for (int j = 0; j < b; j++) { 
			grid[i][j + 1] = row[j] - '0'; 
		}
	}
	BFS();
}