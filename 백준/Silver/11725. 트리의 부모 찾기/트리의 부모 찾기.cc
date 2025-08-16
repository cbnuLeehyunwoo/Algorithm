#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector<vector<int>> adj;
vector<int> hop;
queue<int> q;
int n;
void BFS() {
	q.push(1);
	hop[1] = 1;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int next : adj[x]) {
			if (hop[next] == -1) {
				hop[next] = hop[x] + 1;
				q.push(next);
			}
		}
	}
}
int main() {
	cin >> n;
	hop.resize(n + 1);
	adj.resize(n + 1);
	fill(hop.begin(), hop.end(), -1);
	
	for (int i = 1; i < n; i++) {
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	BFS();
	for (int i = 2; i <= n; i++) {
		for (int x : adj[i]) {
			if (hop[x] == hop[i] - 1) cout << x << "\n";
		}
	}
}