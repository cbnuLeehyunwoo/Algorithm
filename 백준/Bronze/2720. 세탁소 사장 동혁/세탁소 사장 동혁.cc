#include <iostream>

using namespace std;

int main() {
	int t = 0;
	cin >> t;
	int coin[4] = { 25, 10, 5, 1 };
	int remain;

	for (int j = 0; j < t; j++) {
		cin >> remain;
		int coin_use[4] = { 0, };
		while (true) {
			if (remain == 0) {
				cout << coin_use[0] << " " << coin_use[1] << " "
					<< coin_use[2] << " " << coin_use[3] << "\n";
				break;
			}
			for (int i = 0; i < 4; i++) {
				if (remain >= coin[i]) {
					remain -= coin[i];
					coin_use[i]++;
					break;
				}
			}
		}
	}
}