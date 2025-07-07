#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, K, X;
int hop[300001];
vector<int> v[300001];
queue<int> q;

void init() {
    fill(hop + 1, hop + N + 1, -1);
}

void BFS() {
    hop[X] = 0;
    q.push(X);

    while (!q.empty()) {
        int x = q.front();
        q.pop(); 
        for (int next_node : v[x]) {
            if (hop[next_node] == -1) {
                hop[next_node] = hop[x] + 1;
                q.push(next_node);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M >> K >> X;

    init();

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }

    BFS();

    bool found = false;
    for (int i = 1; i <= N; i++) {
        if (hop[i] == K) {
            cout << i << "\n";
            found = true;
        }
    }

    if (!found) {
        cout << -1 << "\n";
    }

    return 0;
}