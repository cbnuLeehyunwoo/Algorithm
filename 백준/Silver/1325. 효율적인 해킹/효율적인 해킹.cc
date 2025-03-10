#include <iostream>
#include <queue>
#include <vector>

#define SIZE 10001

using namespace std;

vector<vector<int>> adj(SIZE);  // 인접 리스트로 변경
vector<int> res(SIZE, 0);
int n, m;
int mx = -1;

int bfs(int v) {
    queue<int> q;
    int cnt = 0;
    vector<bool> visited(SIZE, false);

    q.push(v);
    visited[v] = true;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int next : adj[cur]) {  // 연결된 정점만 탐색
            if (visited[next]) continue;
            q.push(next);
            visited[next] = true;
            cnt++;
        }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[y].push_back(x);  // 인접 리스트 방식
    }

    for (int i = 1; i <= n; i++) {
        res[i] = bfs(i);
        mx = max(mx, res[i]);
    }

    for (int i = 1; i <= n; i++) {
        if (res[i] == mx) cout << i << " ";
    }
    cout << "\n";
}
