#include <iostream>
#include <queue>
#define SIZE 251
using namespace std;
queue <pair<int, int>>q;
int r, c;
char grid[SIZE][SIZE];
bool visited[SIZE][SIZE];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0,  0, 1, -1 };
int sheep = 0;
int wolf = 0;
int res_s = 0;
int res_w = 0;
void init() {
	for (int i = 0; i <= r; i++) {
		for (int j = 0; j <= c; j++) {
			grid[i][j] = '.';
			visited[i][j] = false;
		} 
	}
}

void check(int x, int y) {
	if (grid[x][y] == 'o') {
		sheep++;
	}
	else if (grid[x][y] == 'v') {
		wolf++;
	}
}
void bfs(int x, int y) {
	q.push({ x, y });
	visited[x][y] = true;
	
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		check(x, y);
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < r && ny < c && 0 <= nx && 0 <= ny
				&& !visited[nx][ny] && grid[nx][ny] != '#') {
				q.push({ nx, ny });
				visited[nx][ny] = true;
			}
		}
	}
}

int main() {
	cin >> r >> c;
	init();
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			char temp;
			cin >> temp;
			if (temp != '.' && temp != '#')
			{
				if (temp == 'o') {
					res_s++;
				}
				else {
					res_w++;
				}
			}
			grid[i][j] = temp;
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (grid[i][j] != '#' && !visited[i][j]) {
				sheep = 0;
				wolf = 0;
				bfs(i, j);
				if (sheep > wolf) {
					res_w -= wolf;
				}
				else
					res_s -= sheep;
			}
		}
	}
	cout << res_s << " " << res_w;
}