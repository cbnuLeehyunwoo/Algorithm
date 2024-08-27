#include <iostream>
#include <queue>

using namespace std;

string campus[601];
int frnd[601][601]; // 시작지점부터 각 좌표까지 만날 수 있는 사람의 수를 저장하는 2차원 배열
int dx[4] = { 1, -1, 0, 0 }; // 움직이는 방향(x 좌표)을 저장하는 배열 오른쪽, 왼쪽, 위쪽, 아래쪽 순서
int dy[4] = { 0, 0, 1, -1 }; // 움직이는 방향(y 좌표)을 저장하는 배열
int n = 0; // 캠퍼스의 가로 길이
int m = 0; // 캠퍼스의 세로 길이
queue<pair<int, int>> q; // 탐색할 좌표를 저장하는 큐

void bfs(int x, int y) {
    q.push(make_pair(x, y)); // 처음으로 탐색할 좌표를 큐에 저장
    frnd[x][y] = 0; // 시작지점에서 만난 사람 수는 0으로 초기화

    int total_friends = 0; // 만난 'P'의 총 개수를 저장하는 변수

    while (!q.empty()) { // 탐색할 지점이 없을 때까지 반복
        x = q.front().first; // 큐의 맨 앞에 있는 값을 꺼내고 pop으로 지움
        y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) { // 좌표를 상하좌우로 이동
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (0 <= nx && nx < n && 0 <= ny && ny < m && frnd[nx][ny] == -1 && campus[nx][ny] != 'X') {
                // 새로운 좌표가 맵 밖으로 나가지 않으며, 탐색한 적 없고, 벽이 아닌곳
                q.push(make_pair(nx, ny)); // 조건을 만족하면 큐에 해당 좌표를 push
                frnd[nx][ny] = 0; // 해당 좌표 방문 표시

                if (campus[nx][ny] == 'P') {
                    total_friends++; // 'P'를 만나면 친구 수 증가
                }
            }
        }
    }

    if (total_friends > 0) {
        cout << total_friends; // 만난 친구 수 출력
    }
    else {
        cout << "TT"; // 만난 친구가 없다면 "TT" 출력
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> campus[i];
    }

    // 시작 위치 찾기 ('I'의 위치)
    int start_x = -1, start_y = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (campus[i][j] == 'I') {
                start_x = i;
                start_y = j;
            }
            frnd[i][j] = -1; // frnd 배열을 -1로 초기화
        }
    }

    if (start_x == -1 || start_y == -1) {
        cout << "시작 위치를 찾지 못했습니다.";
        return 1;  // 오류로 프로그램 종료
    }

    bfs(start_x, start_y); // 시작 좌표로 BFS 실행

    return 0;
}
