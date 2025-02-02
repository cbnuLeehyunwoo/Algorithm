#include <iostream>
#include <queue>
#define SIZE 1001
using namespace std;

int adj[SIZE][SIZE];
int hop[SIZE];
int a, b;
int n, m;
bool iscleared = false;
queue<int> q;
void init() {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			adj[i][j] = 0;
		}
		hop[i] = -1;
	}
}

void bfs(int v) {
	q.push(v);
	hop[v] = 0;

	while (!q.empty()) {
		
		v = q.front();
		q.pop();

		for (int i = 1; i <= n; i++) {
			if (adj[v][i] != 0 && hop[i] == -1) {
				q.push(i);
				hop[i] = hop[v] + 1;
			}
		}
	}
}

int main() 
{
	cin >> a >> b;
	cin >> n >> m;
	init();
	for (int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		adj[x][y] = 1;
		adj[y][x] = 1;
	}
	bfs(a);
	cout << hop[b];
}
