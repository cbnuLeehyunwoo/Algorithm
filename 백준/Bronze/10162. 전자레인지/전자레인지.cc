#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	int time[3] = { 300, 60, 10 };
	int cnt[3] = { 0, };
	for (int i = 0; i < 3; i++) {
		if (t >= time[i]) {
			cnt[i] = t / time[i];
			t %= time[i];
		}
	}
	if (t != 0) {
		cout << -1;
	}
	else {
		cout << cnt[0] << " " << cnt[1] << " " << cnt[2];
		return 0;

	}
}