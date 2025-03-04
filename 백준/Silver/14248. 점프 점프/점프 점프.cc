#include <iostream>
#include <queue>
#define SIZE 100001
using namespace std;
queue<int> q;

int n, m, cnt = 0;
int brdg[SIZE];
bool visited[SIZE] = { false, };

void bfs(int v) {
	q.push(v);
	visited[v] = true;

	while (!q.empty()) {
		v = q.front();
		q.pop();

		if (v + brdg[v] < n && visited[v + brdg[v]] == false) {
			q.push(v + brdg[v]);
			visited[v + brdg[v]] = true;
		}

		if (v - brdg[v] >= 0 && visited[v - brdg[v]] == false) {
			q.push(v - brdg[v]);
			visited[v - brdg[v]] = true;
		}


	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> brdg[i];
	}
	cin >> m;
	bfs(m - 1);
	
	for (int i = 0; i < n; i++) {
		if (visited[i]) {
			cnt++;
		}
	}
	cout << cnt;
}