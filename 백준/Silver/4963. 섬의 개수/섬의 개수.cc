#include <iostream>
#include <queue>

#define SIZE 51
using namespace std;

queue<pair<int, int>> q;
int map[SIZE][SIZE];
bool visited[SIZE][SIZE];
int dx[8] = { 1, 1, 1, -1, -1, -1, 0, 0 }; // 8방향 이동 정의
int dy[8] = { 1, 0, -1, 1, 0, -1, 1, -1 };

int w, h, res;


void init() {
	res = 0;
	q = queue<pair<int, int>>(); // 큐 재선언 하여 초기화
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			visited[i][j] = false;
		}
	}

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			map[i][j] = 0;
		}
	}
}
void BFS(int x, int y) {
	q.push({ x, y });
	visited[x][y] = true;

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();

		for(int i = 0; i < 8; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (0 <= nx && 0 <= ny && nx < w && ny < h && !visited[nx][ny] && map[nx][ny] == 1) {
				q.push({ nx, ny });
				visited[nx][ny] = true;
			}
		}
	}
}

int main() 
{
	while (true) {

		cin >> h >> w; 
		if (w == 0 && h == 0) {
			return 0;
		}

		init();
		for (int i = 0; i < w; i++) {
			for (int j = 0; j < h; j++) {
				cin >> map[i][j];
			}
		}

		for (int i = 0; i < w; i++) {
			for (int j = 0; j < h; j++) {
				if (map[i][j] == 1 && !visited[i][j]) {
					BFS(i, j);
					res++;
				}
			}
		}
		cout << res << "\n";
	}

}