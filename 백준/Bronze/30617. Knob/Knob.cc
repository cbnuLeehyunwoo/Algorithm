#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	int prev_l = -2, prev_r = -2;
	cin >> t;
	int cnt = 0;
	for (int i = 0; i < t; i++) {
		int l, r;
		cin >> l >> r;
		if (l != 0 &&  l == r) cnt++;
		if (l != 0 && prev_l == l) cnt++;
		if (r != 0 && prev_r == r) cnt++;
		prev_l = l;
		prev_r = r;
	}
	cout << cnt;
}