#include <iostream>
#include <queue>
#define SIZE 100001
using namespace std;

int dist[SIZE];
int cnt[SIZE];
bool visited[SIZE];

int n, s, e;

queue<int> q;

void bfs(int s) {
	q.push(s);
	visited[s] = true;

	while (!q.empty()) {
		s = q.front();
		q.pop();

		if (s == e) {
			return;
		}

		for (int i = s + dist[s]; i <= n; i += dist[s])
			if (!visited[i]) {
				cnt[i] = cnt[s] + 1;
				q.push(i);
				visited[i] = true;
			}

		for (int i = s - dist[s]; i >= 1; i -= dist[s]) {
			if (!visited[i]) {
				cnt[i] = cnt[s] + 1;
				q.push(i);
				visited[i] = true;
			}
		}
	}
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> dist[i];
	}

	cin >> s >> e;
	bfs(s);

	if (cnt[e] == 0) {
		cout << -1;
	}
	else {
		cout << cnt[e];
	}
}