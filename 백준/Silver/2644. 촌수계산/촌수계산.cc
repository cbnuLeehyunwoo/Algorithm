#include <iostream>
#include <queue>

#define SIZE 101
using namespace std;

queue<int> q;
int adj[SIZE][SIZE];
int cnt[SIZE];
int m, n;
int s, e;
void init()
{
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			adj[i][j] = 0;
		}
		cnt[i] = -1;
	}
}

void bfs(int s)
{
	q.push(s);
	cnt[s] = 0;
	while (!q.empty()) {
		if (s == e) {
			return;
		}
		s = q.front();
		q.pop();

		for (int i = 1; i <= n; i++) {
			if (adj[s][i] == 1 && cnt[i] == -1) {
				q.push(i);
				cnt[i] = cnt[s] + 1;
			}
		}
	}
}

int main() {
	cin >> n;
	cin >> s >> e;
	cin >> m;
	init();
	for (int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;
		adj[a][b] = 1;
		adj[b][a] = 1;
	}
	bfs(s);
	cout << cnt[e];
}