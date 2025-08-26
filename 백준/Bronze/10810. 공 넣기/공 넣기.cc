#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int main() {
	int n, m;
	cin >> n >> m;
	v.resize(n, 0);
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		for (int j = a; j <= b; j++) {
			v[j - 1] = c;
		}
	}
	for (auto x : v) {
		cout << x << " ";
	}
}