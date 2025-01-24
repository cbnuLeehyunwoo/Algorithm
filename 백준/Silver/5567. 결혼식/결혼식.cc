#include <iostream>
#include <queue>

#define SIZE 501
using namespace std;
int adj[SIZE][SIZE];
int dist[SIZE];
queue <int> q;
int n, m, cnt = 0;

void init()
{
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			adj[i][j] = 0;
		}
		dist[i] = -1;
	}
}

void bfs(int v)
{
	q.push(v);
	dist[v] = 0;

	while (!q.empty()) {
		v = q.front();
		q.pop();

		for (int i = 1; i <= n; i++) {
			if (adj[v][i] == 1 && dist[i] == -1) {
				q.push(i);
				dist[i] = dist[v] + 1;
			}
		}
	}
}

int main() {
	cin >> n;
	cin >> m;
	init();

	for (int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;
		adj[a][b] = 1;
		adj[b][a] = 1;
	}

	bfs(1);

	for (int i = 1; i <= n; i++) {
		if (dist[i] == 1 || dist[i] == 2) {
			cnt++;

		}
	}
	cout << cnt;
}