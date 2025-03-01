#include <iostream>
#include <map>
#include <queue>
#define MAX 100001
using namespace std;
queue<int> q;
map<int, int> m;
int n, k;
void bfs(int v) {
	q.push(v);
	m[v] = 0;

	while (!q.empty()) {
		v = q.front();
		q.pop();
        if(v == k) {
            cout << m[v];
            return;
        }
        
		if (2 * v < MAX && m.find(2 * v) == m.end()) {
			q.push(2 * v);
			m[2 * v] = m[v] + 1;
		}

		for (int i = -1; i <= 1; i += 2) {
			if(v + i >= 0 && v + i <= 100000 && m.find(v + i) == m.end()) {
                q.push(v + i);
                m[v + i] = m[v] + 1;
            }
		}
	}
}

int main() {
	cin >> n >> k;
	bfs(n);
}