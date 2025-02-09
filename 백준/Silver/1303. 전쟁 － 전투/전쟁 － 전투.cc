#include <iostream>
#include <queue>

#define SIZE 101

using namespace std;
char grid[SIZE][SIZE];
bool visited[SIZE][SIZE];
queue<pair<int, int>> q;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int n, m; // n: col의 크기, m: row의 크기
int cnt = 0;
int power_b = 0;
int power_w = 0;

void init() {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++){
            grid[i][j] = 0;
            visited[i][j] = false;
        }
    }
}


void b_Bfs(int x, int y){
    q.push({x, y});
    cnt++;
    visited[x][y] = true;
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < m && ny < n && nx >= 0 && ny >= 0 
            && !visited[nx][ny] && grid[nx][ny] == 'B') {
                q.push({nx, ny});
                visited[nx][ny] = true;
                cnt++;
            }
        }
    }
}

void w_Bfs(int x, int y){
    q.push({x, y});
    cnt++;
    visited[x][y] = true;
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < m && ny < n && nx >= 0 && ny >= 0 
            && !visited[nx][ny] && grid[nx][ny] == 'W') {
                q.push({nx, ny});
                visited[nx][ny] = true;
                cnt++;
            }
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(!visited[i][j]){
                if(grid[i][j] == 'W') {
                    cnt = 0;
                    w_Bfs(i, j);
                    power_w += (cnt * cnt);
                }
                else if(grid[i][j] == 'B') {
                    cnt = 0;
                    b_Bfs(i, j);
                    power_b += (cnt * cnt);
                }
            }
        }
    }
    cout << power_w << " " << power_b;
}