#include <iostream>
#include <queue>
#define SIZE 5

using namespace std;
queue<pair<int, int>> q;
int grid[SIZE][SIZE];
int hop[SIZE][SIZE];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void init() {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            hop[i][j] = -1;
        }
    }
}
void bfs(int x, int y) {
    q.push({x, y});
    hop[x][y] = 0;

    while(!q.empty()) {
            x = q.front().first;
            y = q.front().second;
            q.pop();
            if(grid[x][y] == 1) {
                cout << hop[x][y];
                return;
            }
            
            for(int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx >= 0 && ny >= 0 && nx < 5 && ny < 5 
                && hop[nx][ny] == -1 && grid[nx][ny] != -1) {
                    q.push({nx, ny});
                    hop[nx][ny] = hop[x][y] + 1;
                }
            }
    }
    cout << -1;
}

int main() {
    init();
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> grid[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    bfs(x, y);
    // for(int i = 0; i < 5; i++) {
    //     for(int j = 0; j < 5; j++) {
    //         cout << hop[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
}