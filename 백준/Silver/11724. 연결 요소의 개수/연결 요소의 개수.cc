#include <iostream>
#include <queue>

#define SIZE 1001
using namespace std;
int n, m, cnt;
int adj[SIZE][SIZE];
bool visited[SIZE];
queue<int> q;

void init() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			adj[i][j] = 0;
		}
		visited[i] = false;
	}
}

void bfs(int v) {
	q.push(v);
	visited[v] = true;

	while (!q.empty()) {
		v = q.front();
		q.pop();

		for (int i = 1; i <= n; i++) {
			if (adj[v][i] != 0 && !visited[i]) {
				q.push(i);
				visited[i] = true;
			}
		}
	}
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		adj[a][b] = 1;
		adj[b][a] = 1;
	}
	
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			bfs(i);
			cnt++;
		}
	}

	cout << cnt;
}