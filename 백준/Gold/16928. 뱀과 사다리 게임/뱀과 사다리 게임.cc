#include <iostream>
#include <queue>
#include <unordered_map>
#define SIZE 101

using namespace std;
queue<int> q;
unordered_map<int, int> hmap;

int hop[SIZE];
int n, m;

void init() {
    for (int i = 1; i <= 100; i++) {
        hop[i] = -1;
    }
}

void bfs(int v) {
    q.push(v);
    hop[v] = 0;

    while (!q.empty()) {
        v = q.front();
        q.pop();
        
        for (int i = 1; i <= 6; i++) {
            int nv = v + i;
            if (nv <= 100 && hop[nv] == -1) {
                // 사다리 또는 뱀이 있으면 해당 위치로 이동
                if (hmap.find(nv) != hmap.end()) {
                    nv = hmap[nv];
                }
                // 이동한 위치 방문 처리
                if (hop[nv] == -1) {
                    hop[nv] = hop[v] + 1;
                    q.push(nv);
                }
            }
        }
    }
}

int main() {
    cin >> n >> m;
    init();
    for (int i = 0; i < n + m; i++) {
        int u, v;
        cin >> u >> v;
        hmap[u] = v;
    }
    bfs(1);
    cout << hop[100] << endl;
}
