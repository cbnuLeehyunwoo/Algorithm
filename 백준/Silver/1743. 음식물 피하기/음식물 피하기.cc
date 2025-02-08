#include <iostream>
#include <queue>
#define SIZE 101
using namespace std;
int r, c, k;
int max; // 음식물의 최대 크기
int grid[SIZE][SIZE];
int cnt[SIZE][SIZE];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {-1, 1, 0, 0};
queue<pair<int, int>> q;

void init(){
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            grid[i][j] = 0;
            cnt[i][j] = -1;
        }
    }
}

void bfs(int x, int y){
    q.push({x, y});
    cnt[x][y] = 1;
    int max = 1;;
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < r && ny < c && nx >= 0 && ny >= 0 
            && cnt[nx][ny] == -1 && grid[nx][ny] == 1) {
                q.push({nx, ny});
                cnt[nx][ny] = max + 1;
                max++;
            } 
        }
    }
}


int main(){
    cin >> r >> c >> k;
    init();
    for(int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        grid[x - 1][y - 1] = 1;
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(cnt[i][j] == -1 && grid[i][j] == 1){
                bfs(i, j);
            }
        }
    }
    int max = -1;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(cnt[i][j] > max){
                max = cnt[i][j];    
            }
        }
    }
    cout << max;
}