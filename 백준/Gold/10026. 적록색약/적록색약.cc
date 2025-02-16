#include <iostream>
#include <queue>

#define SIZE 101

using namespace std;
queue<pair<int, int>> q;

int n;
char grid[SIZE][SIZE];
char rg_grid[SIZE][SIZE];
bool visited[SIZE][SIZE] = {false, };
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int normal_cnt = 0;
int rg_cnt = 0;
char to_find;


char get_color(int x, int y) {
    return grid[x][y];
}


char rg_get_color(int x, int y) {
    return rg_grid[x][y];
}

void init() {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            visited[i][j] = false;
        }
    }
}

void bfs(int x, int y) {
    to_find = get_color(x, y);
    q.push({x, y});
    visited[x][y] = true;

    while(!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= 0 && ny >= 0 && nx < n && ny < n 
            && !visited[nx][ny] && grid[nx][ny] == to_find) {
                q.push({nx, ny});
                visited[nx][ny] = true;
            }
        }
    }
}

void rg_bfs(int x, int y) {
    to_find = rg_get_color(x, y);
    q.push({x, y});
    visited[x][y] = true;

    while(!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= 0 && ny >= 0 && nx < n && ny < n 
            && !visited[nx][ny] && rg_grid[nx][ny] == to_find) {
                q.push({nx, ny});
                visited[nx][ny] = true;
            }
        }
    }
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            char temp;
            cin >> temp;
            if(temp == 'R') {
                rg_grid[i][j] = 'G';
            }
            else
                rg_grid[i][j] = temp;
            grid[i][j] = temp;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(!visited[i][j]) {
                bfs(i, j);
                normal_cnt++;
            }
        }
    }
    init();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(!visited[i][j]) {
               rg_bfs(i, j);
                rg_cnt++;
            }
        }
    }
    cout << normal_cnt << " " << rg_cnt;
}
