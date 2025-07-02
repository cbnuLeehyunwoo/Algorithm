#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int grid[16][16];

void init() {
	for (int i = 1; i <= 15; i++) {
		grid[0][i] = i;
	}
}

void build_dp() {
	for (int i = 1; i <= 15; i++) {
		for (int j = 1; j <= 15; j++) {
			for (int k = 1; k <= j; k++) {
				grid[i][j] += grid[i - 1][k];
			}
		}
	}
}
int main() {
	int t;
	cin >> t;
	init();
	build_dp();
	for (int i = 0; i < t; i++) {
		int k, n;
		cin >> k >> n;
		cout << grid[k][n] << "\n";
	}
}