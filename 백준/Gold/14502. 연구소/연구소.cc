#include <iostream>
#include <queue>
#include <tuple>
#include <vector>
#include <algorithm>
using namespace std; 
int map[8][8]; 
int wall[8][8]; 
int dx[4] = { 0,0,1,-1 }; 
int dy[4] = { 1,-1,0,0 }; 
int max_cnt = -1; 
int m, n; 
int path_cnt; 
queue < pair<int, int>>q;
void bfs() {

	int s_map[8][8]; 
	int visited[8][8] = { 0, };
	int cnt = 0; 
	queue <pair<int, int>>birus; 
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 2)birus.push({ i,j }); 
			if (wall[i][j] == 1)s_map[i][j] = 1;
			else s_map[i][j] = map[i][j]; 
		}
	}
	while (!birus.empty()) {
		int by, bx; 
		tie(by, bx) = birus.front(); 
		//cout << by << " " << bx << endl; 
		birus.pop(); 
		q.push({ by,bx });
		visited[by][bx] = 1; 
		while (!q.empty()) {
			int y, x; 
			tie(y, x) = q.front(); 			
			q.pop(); 
			for (int i = 0; i < 4; i++) {
				int ny = dy[i] + y; 
				int nx = dx[i] + x; 
				if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue; 
				if (s_map[ny][nx] == 1 ||s_map[ny][nx]==2|| visited[ny][nx])continue; 
				q.push({ ny,nx }); 
				visited[ny][nx] = 1; 
				cnt++;
			}
		}
	}
	max_cnt = max(path_cnt-cnt-3, max_cnt); 
	return; 
}
void w_check(int cnt) {
	if (cnt == 3) {
		bfs(); 
		return; 	
	}
	else {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (map[i][j] == 0&&wall[i][j]==0) {
					wall[i][j] = 1; //벽을 의미	
					w_check(cnt + 1); 
					wall[i][j] = 0; 
				}
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> m >> n; 
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j]; 		
			if (map[i][j] == 2 || map[i][j] == 1)wall[i][j] = -1;
			else path_cnt++; 
			//2 바이러스, 1 벽, 0 통로 
		}
	}
	w_check(0); 
	cout << max_cnt; 
}