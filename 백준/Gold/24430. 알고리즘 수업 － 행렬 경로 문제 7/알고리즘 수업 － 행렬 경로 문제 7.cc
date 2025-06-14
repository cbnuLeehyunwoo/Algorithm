#include <iostream>
#include <vector>
using namespace std;

int arr[1001][1001];
int chk[1001][1001];
pair<int, int> dp[1001][1001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N; cin >> N;
	for (int r = 1; r <= N; r++) {
		for (int c = 1; c <= N; c++) {
			cin >> arr[r][c];
		}
	}

	int P; cin >> P;
	while (P--) {
		int r, c; cin >> r >> c;
		chk[r][c] = 1;
	}

	for (int r = 1; r <= N; r++) {
		for (int c = 1; c <= N; c++) {
			auto tmp = max(dp[r - 1][c], dp[r][c - 1]);
			dp[r][c] = make_pair(tmp.first + arr[r][c], tmp.second + chk[r][c]);
		}
	}

	cout << dp[N][N].first << ' ' << dp[N][N].second;
}