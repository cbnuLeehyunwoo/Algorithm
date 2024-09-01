#include <iostream>
#include <queue>
#include <cstring> // memset을 사용하기 위해 추가
#define SIZE 51

using namespace std;

int field[SIZE][SIZE];
bool visited[SIZE][SIZE];
int M, N, K, x, y, cnt;
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

queue<pair<int, int>> q;

void bfs(int x, int y) {
	q.push({ x, y });
	visited[x][y] = true;

	while (!q.empty()) {
		int a = q.front().first;
		int b = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = a + dx[i];
			int ny = b + dy[i];

			if (nx >= 0 && nx < M && ny >= 0 && ny < N && field[nx][ny] == 1 && !visited[nx][ny]) {
				// 이동한 좌표가 밭을 나가지 않는지, 배추가 위치한 자리인지(1인지) 방문했었는지(vistied 배열이 false인지)
				q.push({ nx, ny });  // 조건을 만족하면 해당 좌표의 주변에 대해 탐색을 시도하기 위해 큐에 푸쉬
				visited[nx][ny] = true;  // 방문했음 표시
			}
		}
	}
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; t++) {
		cin >> M >> N >> K;
		memset(field, 0, sizeof(field)); // 배열 전체 초기화
		memset(visited, 0, sizeof(visited)); // 배열 전체 초기화

		for (int i = 0; i < K; i++) {
			cin >> x >> y;
			field[x][y] = 1; // 배추가 있는 곳의 좌표값을 1로 설정(없는 곳은 0)
		}

		cnt = 0;
		for (int i = 0; i < M; i++) { // M은 행의 수
			for (int j = 0; j < N; j++) { // N은 열의 수
				if (field[i][j] == 1 && !visited[i][j]) {
					bfs(i, j);
					cnt++; // bfs가 끝났다는 것은 연결된 하나의 배추군집탐색을 완료한 것이므로 증가
				}
			}
		}

		cout << cnt << endl; // 각 테스트 케이스의 결과를 출력
	}

	return 0;
}
