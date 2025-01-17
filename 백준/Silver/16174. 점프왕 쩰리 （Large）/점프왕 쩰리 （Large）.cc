#include <iostream>
#include <queue> 
#define SIZE 65

using namespace std;
int game[SIZE][SIZE];
bool visited[SIZE][SIZE] = { 0, };
int n = 0;
bool clear = false;

queue<pair<int, int>> q;



void bfs(int x, int y) {

	q.push({ x, y });
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		if (game[x][y] == -1) {
			clear = true;
			return;
		}
		if (game[x][y] == 0) {
			continue;
		}
		int nx = x + game[x][y];
		if (nx < n && !visited[nx][y]) {
			q.push({ nx, y });
			visited[nx][y] = true;
		}

		int ny = y + game[x][y];
		if (ny < n && !visited[x][ny]) {
			q.push({ x, ny });
			visited[x][ny] = true;
		}

	}
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> game[i][j];
		}
	}

	bfs(0, 0);
	if (clear) {
		cout << "HaruHaru";
	}
	else {
		cout << "Hing";
	}
}

