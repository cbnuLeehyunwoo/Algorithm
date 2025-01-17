#include <iostream>
#include <queue>


#define SIZE 101
using namespace std;

queue<int> q;
int adj[SIZE][SIZE];
bool visited[SIZE];
int n, m; // 컴퓨터의 수(정점), 쌍의 수(간선)
int res = 0; // 바이러스에 걸리는 컴퓨터 수
void init() {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j < n; j++) {
			adj[i][j] = 0;
		}
	}

	for (int i = 0; i <= n; i++) {
		visited[i] = false;
	}
}

void bfs(int v) {
	visited[v] = true;
	q.push(v);

	while (!q.empty()) {
		v = q.front();
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (adj[v][i] == 1 && visited[i] == false) {
				q.push(i);
				visited[i] = true;
				res++;
			}
		}
	}
}

int main() 
{
	cin >> n;
	cin >> m;
	init();
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		adj[a][b] = 1;
		adj[b][a] = 1;
	}
	bfs(1);
	cout << res;
}