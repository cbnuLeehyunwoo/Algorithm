#include <iostream>
#include <queue>
#include <string> 

#define MAX 1000 + 1 // 상자 가로, 세로칸 최대 크기

using namespace std;


int n, m, result = 0; // 상자의 세로 칸 수, 가로 칸 수, 토마토가 모두 익게될 날짜
int arr[MAX][MAX]; // 밭의 상태, 소요일을 저장할 2차원 배열
int dx[4] = { 1, -1, 0, 0 };   // 좌표를 상하좌우로 이동
int dy[4] = { 0, 0, 1, -1 };
queue<pair<int, int>> q;       // BFS 구현을 위해 탐색할 칸을 좌표형태로 저장할 큐 정의 

// 토마토에 대해 bfs를 수행하는 함수
void bfs() {

    // 더이상 탐색할 곳이 없을 때까지
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {   // 네방향을 차례대로 탐색
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (0 <= nx && 0 <= ny && nx < n && ny < m && arr[nx][ny] == 0) {  // 탐색한 좌표가 주어진 범위를 벗어나는지, 이동할수 있는 좌표인지(-1이 아닌지)
                q.push({ nx,ny });  // 해당 좌표를 큐에 푸쉬
                arr[nx][ny] = arr[x][y] + 1; // 하루 경과
            }
        }
    }
}

int main() {
    cin >> m >> n;

    // 밭의 상태를 입력받음
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            // 만약 익은 토마토가 있는 자리라면
            // BFS 탐색을 시작할 장소임..
            if (arr[i][j] == 1) {
                // 큐에 미리 푸쉬해둔다..
                q.push({ i, j });
            }
        }
    }
    bfs();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) { // 시간이 지나도 안익는 토마토가 있을 경우
                cout << "-1\n";
                return 0;
            }
            if (result < arr[i][j]) { // 토마토가 다 익었을 때 몇일만에 익었는가
                result = arr[i][j];
            }
        }
    }
    cout << result - 1;
    return 0;
}