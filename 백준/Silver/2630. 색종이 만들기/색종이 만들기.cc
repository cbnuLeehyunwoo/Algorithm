#include <iostream>

using namespace std;
int grid[129][129];
int w = 0;
int b = 0;

void rec(int x, int y, int k) {
	int if_b = 0;
	int sum = 0;
	for (int i = x; i < x + k; i++) {
		for (int j = y; j < y + k; j++) {
			if_b++;
			sum += grid[i][j];
		}
	}
	if (sum == if_b) b++;
	else if (sum == 0) w++;
	else {
		rec(x, y, k / 2);
		rec(x, y + k / 2, k / 2);
		rec(x + k / 2, y + k / 2, k / 2);
		rec(x + k / 2, y, k / 2);
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> grid[i][j];
		}
	}
	rec(0, 0, n);
	cout << w << "\n";
	cout << b << "\n";
	return 0;
}