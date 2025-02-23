#include <iostream>
#include <algorithm>
using namespace std;
int small[9];

void display(int x, int y) {
	int temp1 = small[x];
	int temp2 = small[y];
	sort(small, small + 9);
	for (int i = 0; i < 9; i++) {
		if (small[i] == temp1 || small[i] == temp2) {
			continue;
		}
		cout << small[i] << "\n";
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> small[i];
		sum += small[i];
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == j) continue;
			if (sum - (small[i] + small[j]) == 100) {
				display(i, j);
				return 0;
			}
		}
	}
}