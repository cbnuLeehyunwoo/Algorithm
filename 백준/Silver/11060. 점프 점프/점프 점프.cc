#include <iostream>
#include <queue>
#define SIZE 1001

using namespace std;
int map[SIZE];
int cnt[SIZE];
queue<int> q;
int n, a;

void init() {
	for (int i = 0; i < n; i++) {
		map[i] = 0;
		cnt[i] = -1;
	}
}

void bfs(int v) {
	q.push(v);
	cnt[v] = 0;
	while (!q.empty()) {
		v = q.front();
		q.pop();
		for (int i = 1; i <= map[v]; i++) {
			int nv = v + i;
			if (nv <= n && cnt[nv] == -1) {
				q.push(nv);
				cnt[nv] = cnt[v] + 1;
			}
		}
	}
 }
int main() {
	cin >> n;
	init();
	if (n == 1) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> map[i];
	}
	
	bfs(0);
	//for (int i = 0; i < n; i++) {
	//	cout << cnt[i];
	//}
	cout << cnt[n - 1];
}