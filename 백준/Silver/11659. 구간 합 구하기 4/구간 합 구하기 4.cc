#include <iostream>
#include <vector>


using namespace std;
vector<int> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, t;
	cin >> n >> t;
	v.push_back(0);
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(v[i] + temp);
	}

	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		cout << v[b] - v[a - 1] << "\n";
	}

}