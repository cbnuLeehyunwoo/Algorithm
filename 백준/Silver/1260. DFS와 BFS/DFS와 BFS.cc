#include <iostream>
#include <queue>
using namespace std;
#define MAX 1001

int n, m, v; //정점개수, 간선개수, 시작정점
int adj[MAX][MAX]; 
bool visited[MAX]; //정점 방문 여부
queue<int> q;

void init() {
    for (int i = 1; i <= n; i++) {
        visited[i] = false;
    }
}



void DFS(int v) {
    visited[v] = true;
    cout << v << " ";

    for (int i = 0; i <= n; i++) {
        if (adj[v][i] == 1 && visited[i] == 0) { //현재 정점과 연결되어있고 방문되지 않았으면
            DFS(i);
        }
    }
}

void BFS(int v) {
    q.push(v);
    visited[v] = true;
    cout << v << " ";

    while (!q.empty()) {
        v = q.front();
        q.pop();

        for (int w = 1; w <= n; w++) {
            if (adj[v][w] == 1 && visited[w] == 0) { //현재 정점과 연결되어있고 방문되지 않았으면
                q.push(w);
                visited[w] = true;
                cout << w << " ";
            }
        }
    }
}

int main() {
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }

    init();
    DFS(v);

    cout << '\n';

    init();
    BFS(v);

    return 0;
}
