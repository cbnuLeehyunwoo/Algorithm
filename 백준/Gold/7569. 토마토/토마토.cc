#include <iostream>
#include <queue>
#include <tuple>
#include <string> 

#define MAX 100 + 1 // 상자 가로, 세로칸 최대 크기

using namespace std;


int n, m, h, result = 0; // 상자의 세로 칸 수, 가로 칸 수, 토마토가 모두 익게될 날짜
int arr[MAX][MAX][MAX]; // 밭의 상태, 소요일을 저장할 2차원 배열
int dx[6] = { 1, -1, 0, 0, 0, 0 };   // 좌표를 앞뒤좌우상하로 이동
int dy[6] = { 0, 0, 1, -1, 0, 0 };   
int dz[6] = { 0, 0, 0, 0, 1, -1 };
queue<tuple<int, int, int>> q;       // BFS 구현을 위해 탐색할 칸을 좌표형태로 저장할 큐 정의 

// 토마토에 대해 bfs를 수행하는 함수
void bfs() {

    // 더이상 탐색할 곳이 없을 때까지
    while (!q.empty()) {
        int x = get<0>(q.front());
        int y = get<1>(q.front());
        int z = get<2>(q.front());
        q.pop();
        for (int i = 0; i < 6; i++) {   // 네방향을 차례대로 탐색
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nz = z + dz[i];
            if (0 <= nx && 0 <= ny && 0 <= nz && nx < n && ny < m && nz < h && arr[nx][ny][nz] == 0) {  // 탐색한 좌표가 주어진 범위를 벗어나는지, 이동할수 있는 좌표인지(-1이 아닌지)
                q.push({ nx, ny, nz });  // 해당 좌표를 큐에 푸쉬
                arr[nx][ny][nz] = arr[x][y][z] + 1; // 하루 경과
            }
        }
    }
}

int main() {
    cin >> h >> m >> n;

    // 밭의 상태를 입력받음
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for(int k = 0; k < h; k++) {
                cin >> arr[i][j][k];
                // 만약 익은 토마토가 있는 자리라면
                // BFS 탐색을 시작할 장소임..
                if (arr[i][j][k] == 1) {
                    // 큐에 미리 푸쉬해둔다..
                    q.push({ i, j, k });
                }
            }
        }
    }
    bfs();


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < h; k++) {
                if (arr[i][j][k] == 0) { // 시간이 지나도 안익는 토마토가 있을 경우
                    cout << "-1\n";
                    return 0;
                }
                if (result < arr[i][j][k]) { // 토마토가 다 익었을 때 몇일만에 익었는가
                    result = arr[i][j][k];
                }
            }
        }
    }
    cout << result - 1;
    return 0;
}