#include <iostream>
#include <queue>
#include <unordered_map>
#include <algorithm>
#define SIZE 100001
int n, m, r, cnt = 1;
using namespace std;
queue<int> q;
vector<int> vec[SIZE];
bool visited[SIZE];
unordered_map<int, int> hm;
int res[SIZE];


void bfs(int v) {
	visited[v] = true;
	q.push(v);
	while (!q.empty()) {
		v = q.front();
		q.pop();
		res[v] = cnt;
		cnt++;
		for (int i = 0; i < vec[v].size(); i++) {
			if (!visited[vec[v][i]]) {
				visited[vec[v][i]] = 1;
				q.push(vec[v][i]);
			}
		}
	}
}

int main() {
	cin >> n >> m >> r;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	for (int i = 1; i <= n; i++) {
		sort(vec[i].begin(), vec[i].end());
	}
	bfs(r);
	for (int i = 1; i <= n; i++) {
		cout << res[i] << '\n';
	}
}