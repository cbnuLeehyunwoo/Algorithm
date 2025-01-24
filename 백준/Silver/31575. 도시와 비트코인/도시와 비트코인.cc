#include <iostream>
#include <queue>

#define SIZE 301
using namespace std;

int map[SIZE][SIZE];
bool visited[SIZE][SIZE];
int dx[2] = { 1, 0 }; // 가로 이동
int dy[2] = { 0, 1 }; // 세로 이동
queue<pair<int, int>> q;

int n, m; // n: 가로 크기, m: 세로 크기
bool cleared = false;

// 초기화 함수
void init() {
    for (int i = 1; i <= m; i++) { // 세로
        for (int j = 1; j <= n; j++) { // 가로
            map[i][j] = 0;
            visited[i][j] = false;
        }
    }
}

// BFS 탐색
void bfs(int x, int y) {
    q.push({ x, y });
    visited[x][y] = true;
    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();

        // 도착지점 확인
        if (x == m && y == n) {
            cleared = true;
            return;
        }

        // 인접 노드 탐색
        for (int i = 0; i < 2; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            // 경계 조건 수정
            if (nx <= m && ny <= n && !visited[nx][ny] && map[nx][ny] != 0) {
                q.push({ nx, ny });
                visited[nx][ny] = true;
            }
        }
    }
}

int main() {
    cin >> n >> m; // 입력: 가로 크기(n), 세로 크기(m)

    init();
    for (int i = 1; i <= m; i++) { // 세로
        for (int j = 1; j <= n; j++) { // 가로
            cin >> map[i][j];
        }
    }

    bfs(1, 1);

    if (cleared) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}
