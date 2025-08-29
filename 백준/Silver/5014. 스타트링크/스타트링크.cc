#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
queue<int> q;
vector<int> hop;

int f, s, g, u, d;

void BFS(int s) {
	q.push(s);
	hop[s] = 0;
	while (!q.empty()) {
		int x = q.front();
		if (x == g) {
			cout << hop[x];
			return;
		}
		q.pop();
		
		if (x + u <= f && hop[x + u] == -1) {
			q.push(x + u);
			hop[x + u] = hop[x] + 1;
		}
		if (x - d >= 1 && hop[x - d] == -1) {
			q.push(x - d);
			hop[x - d] = hop[x] + 1;
		}
	}
	cout << "use the stairs";
}

int main() {
	cin >> f >> s >> g >> u >> d;
	hop.resize(f + 1, -1);
	BFS(s);
}