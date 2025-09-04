#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
queue<int> q;
vector<int> hop;
vector<vector<int>> adj;
int n, m, r;

void BFS() {
	q.push(r);
	hop[r] = 1;
	int p = 2;
	while(!q.empty()) {
		int x = q.front();
		q.pop();

		for (int i = n + 1; i >= 1; i--) {
			
		}
		for (int v : adj[x]) {
			if (hop[v] == 0) {
				q.push(v);
				hop[v] = p;
				p++;
			}
		}
	}

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> r;
	hop.resize(n + 1, 0);
	adj.resize(n + 1);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for (int i = 1; i <= n; i++) {
		sort(adj[i].begin(), adj[i].end(), greater<int>());
	}
	BFS();

	for (int i = 1; i <= n; i++) {
		cout << hop[i];
		cout << "\n";
	}
}