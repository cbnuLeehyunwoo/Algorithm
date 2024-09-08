#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
#define MAX 26

int n, cnt = 0;
string arr[MAX];                   // 주택단지를 입력받을 문자열 배열
bool visited[MAX][MAX] = { 0, };  // x,y를 방문했는지 참거짓으로 저장하는 배열
int dx[4] = { 1, -1, 0, 0 };   // 좌표의 상하좌우 이동 정의
int dy[4] = { 0, 0, 1, -1 };   // 좌표의 상하좌우 이동 정의
vector<int> result;            // 결과(단지마다 집의 수)를 저장할 벡터 정의
queue<pair<int, int>> q;       // 탐색할 좌표를 저장할 큐 정의

void bfs(int x, int y) {    // 넓이 우선 탐색을 수행하는 함수
    q.push({ x,y });        // 초기 위치를 큐에 푸쉬
    visited[x][y] = true;   // 초기위치 방문했음 처리
    cnt++;                  // 주택 개수 증가

    while (!q.empty()) {    // 큐가 빌때까지 반복
        int a = q.front().first;    // x y 좌표 꺼낸 후 pop함수로 제거
        int b = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {  // 상하좌우 탐색
            int nx = a + dx[i];        // 1 혹은 -1 만큼 x y좌표 이동
            int ny = b + dy[i];
            if (0 <= nx && 0 <= ny && nx < n && ny < n && visited[nx][ny] == false && arr[nx][ny] == '1') { 
                // 이동한 좌표가 주택단지의 범위를 초과하는지, 방문하지 않은 좌표인지, 값이 1인지(집이 있는 곳인지)
                q.push({ nx,ny }); // 맞다면 다음에 탐색하기 위해 해당 좌표를 큐에 푸쉬
                visited[nx][ny] = true; // 해당 좌표(x, y)를 방문했음 처리
                cnt++; // 집이 있는 좌표였으므로 카운트업
            }
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == '1' && visited[i][j] == false) { // 집이 있다고 표시되어있거나, 방문하지 않은 곳부터 넓이 탐색 진행
                cnt = 0;
                bfs(i, j);
                result.push_back(cnt);  
            }
        }
    }

    sort(result.begin(), result.end());  

    cout << result.size() << "\n";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }
}