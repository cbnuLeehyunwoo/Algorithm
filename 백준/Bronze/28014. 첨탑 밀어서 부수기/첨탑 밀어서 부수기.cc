#include <iostream>
#include <vector>
using namespace std;
vector<int> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
	int cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	for (int i = 0; i < n; i++) {
		if (i == n - 1) {
			break;
		}
		if (v[i] > v[i + 1]) {
			cnt++;
		}

		
	}
	cout << n - cnt;
}