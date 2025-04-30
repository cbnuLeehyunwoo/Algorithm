#include <iostream>
#include <queue>
#include <vector>
#define SIZE 600001

using namespace std;
vector <int> vec[SIZE];
queue <int> q;
bool visited[SIZE];
int res[SIZE];
int n, m;
int s, e;

void bfs(int v) {
	res[v] = 0;
	visited[v] = true;
	q.push(v);
	while (!q.empty()) {
		v = q.front();
		if (v == e) {
			cout << res[v];
			return;
		}
		q.pop();
		for (int i = 0; i < vec[v].size(); i++) {
			if (!visited[vec[v][i]]) {
				visited[vec[v][i]] = true;
				q.push(vec[v][i]);
				res[vec[v][i]] = res[v] + 1;
			}
		}
		for (int i = -1; i <= 1; i += 2) {
			int nv = v + i;
			if (nv > 0 && nv <= n && !visited[nv]) {
				visited[nv] = true;
				q.push(nv);
				res[nv] = res[v] + 1;
			}
		}	
	}
}
int main() {
	cin >> n >> m;
	cin >> s >> e;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	bfs(s);
}