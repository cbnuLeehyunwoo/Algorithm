#include <iostream>
#include <queue>
#define SIZE 1001
using namespace std;

queue<pair<int, int>> q;
int n, m; // n: 세로 크기(행), m: 가로 크기(열)
int grid[SIZE][SIZE];
bool visited[SIZE][SIZE];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

void bfs(int x, int y) {

    q.push({ x, y });
    visited[x][y] = true;

    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

 
            if (nx >= 0 && nx < n && ny >= 0 && ny < m &&
                !visited[nx][ny] && grid[nx][ny] == 0) {
                q.push({ nx, ny });
                visited[nx][ny] = true;
            }
        }
    }
}

int main() {
    cin >> n >> m; // 세로(행) n, 가로(열) m
    for (int i = 0; i < n; i++) { // 0-based 인덱싱
        string row;
        cin >> row;
        for (int j = 0; j < m; j++) {
            grid[i][j] = row[j] - '0'; // 문자형 숫자를 정수로 변환
        }
    }

    // 첫 번째 행에서 시작점 찾기
    for (int i = 0; i < m; i++) {
        if (grid[0][i] == 0 && !visited[0][i]) {
            bfs(0, i);
        }
    }

    // 마지막 행(n-1)에 도달했는지 확인
    for (int i = 0; i < m; i++) {
        if (visited[n - 1][i]) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
