#include <iostream>
#include <queue>
#define SIZE 51
using namespace std;

queue <pair<int, int>> q;

int grid[SIZE][SIZE];
int cnt[SIZE][SIZE];
int dx[8] = { 1, 1, 1,-1, -1, -1, 0, 0 };
int dy[8] = { -1, 1, 0, 0, 1, -1, 1, -1 };
int n, m;

void bfs() {
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        // 8방향으로 탐색
        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && ny >= 0 && nx < n && ny < m && cnt[nx][ny] == -1) {
                // 아직 방문하지 않은 칸이라면, 해당 칸의 안전 거리 설정
                cnt[nx][ny] = cnt[x][y] + 1;
                q.push({ nx, ny });
            }
        }
    }
}

int main() {
    cin >> n >> m;

    // cnt 배열을 -1로 초기화
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            grid[i][j] = 0;
            cnt[i][j] = -1;
        }
    }

    // 여러 상어 위치를 큐에 넣음
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 1) {
                // 상어가 있는 곳에서 거리 0으로 설정
                cnt[i][j] = 0;
                q.push({ i, j });
            }
        }
    }

    // BFS 시작
    bfs();

    // 안전 거리의 최댓값을 찾음
    int maxDistance = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (cnt[i][j] > maxDistance) {
                maxDistance = cnt[i][j];
            }
        }
    }

    // 결과 출력
    cout << maxDistance;

    return 0;
}
