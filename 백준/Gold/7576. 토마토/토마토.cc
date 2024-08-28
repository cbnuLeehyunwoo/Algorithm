#include <iostream>
#include <queue>
#include <string> 

#define MAX 1000 + 1

using namespace std;


int n, m, result = 0;
int arr[MAX][MAX];
int visited[MAX][MAX] = { 0, };
int dx[4] = { 1, -1, 0, 0 };   // 좌표를 상하좌우로 이동
int dy[4] = { 0, 0, 1, -1 };
queue<pair<int, int>> q;       // 탐색할 좌표를 저장할 큐 정의 

void bfs() {

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {   // 네방향을 차례대로 탐색
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (0 <= nx && 0 <= ny && nx < n && ny < m  && arr[nx][ny] == 0) {  // 탐색한 좌표가 주어진 범위를 벗어나는지, 이동할수 있는 좌표인지(-1이 아닌지)
                q.push({ nx,ny });  // 해당 좌표를 큐에 푸쉬
                arr[nx][ny] = arr[x][y] + 1; 
            }
        }
    }
}

int main() {
    cin >> m >> n;

  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
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