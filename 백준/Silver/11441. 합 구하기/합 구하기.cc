#include <iostream>
#include <vector>

using namespace std;
vector<int> v;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	v.push_back(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(v[i] + temp);
	}
	
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		cout << v[b] - v[a - 1] << "\n";
	}
}