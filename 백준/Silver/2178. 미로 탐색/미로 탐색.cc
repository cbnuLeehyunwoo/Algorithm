#include <iostream>
#include <queue>

using namespace std;

string map[100];
int dis[100][100]; // 시작지점부터 각 좌표까지의 거리를 저장하는 2차원배열
int dx[4] = { 1, -1, 0, 0 }; // 움직이는 방향(x 좌표)을 저장하는 배열 오른쪽, 왼쪽, 위쪽, 아래쪽 순서
int dy[4] = { 0, 0, 1, -1 }; // 움직이는 방향(y 좌표)을 저장하는 배열
int n = 0; // 미로의 가로길이
int m = 0; // 미로의 세로길이
queue<pair<int, int>> q;  // 탐색할 좌표를 저장하는 큐 

void bfs(int x, int y) {
	q.push(make_pair(x, y)); // 입력값을 묶어서 큐에 저장 -> 처음으로 탐색할 좌표임
	dis[x][y] = 1; // 시작지점도 포함하기 때문에 시작지점의 거리 = 1
	while (!q.empty()) {  // 탐색할 지점이 없을 때까지 반복
		x = q.front().first;  // 큐의 맨 앞에 있는 값을 꺼낸 후 pop으로 지움
		y = q.front().second;
		q.pop();
		
		for (int i = 0; i < 4; i++) {  // 좌표를 상하좌우 좌표로 이동
			int nx = x + dx[i];
			int ny = y + dy[i]; 
			if (0 <= nx && nx < n && 0 <= ny && ny < m && dis[nx][ny] == 0 && map[nx][ny] == '1') {
				// x좌표가 맵밖으로 안나가는지, y좌표가 맵밖으로 안나가는지, 탐색한적 없는지, 맵에 1로 찍혀있는지(이동할수 있는 곳인지)
				q.push(make_pair(nx, ny));  // 조건을 만족하면 큐에 해당 좌표 푸쉬
				dis[nx][ny] = dis[x][y] + 1; // 출발점에서 해당 좌표까지의 거리 저장
			}
		}
 
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)  // 한줄씩 입력받고 2차원배열에 저장
		cin >> map[i];
	bfs(0, 0);
	cout << dis[n - 1][m - 1];
	return 0;
}