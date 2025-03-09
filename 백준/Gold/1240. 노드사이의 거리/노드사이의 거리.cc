#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define SIZE 1001
vector<pair<int, int>> adj[SIZE];  // 인접 리스트: adj[i]에는 (연결된 정점, 가중치) 저장

int n, m;

void bfs(int v, int w) {
    queue<pair<int, int>> q;  // (현재 정점, 현재까지 거리)
    bool visited[SIZE] = { false, };

    q.push({ v, 0 });
    visited[v] = true;

    while (!q.empty()) {
        int cur = q.front().first;
        int dist = q.front().second;
        q.pop();

        if (cur == w) {
            cout << dist << "\n";
            return;
        }

        for (auto edge : adj[cur]) {
            int nxt = edge.first;
            int weight = edge.second;
            if (visited[nxt]) continue;
            visited[nxt] = true;
            q.push({ nxt, dist + weight });
        }

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n - 1; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        adj[x].push_back({ y, z });
        adj[y].push_back({ x, z });  // 양방향 간선
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        bfs(a, b);
    }
}
