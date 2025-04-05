#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int mush[10];
	int total = 0;
	int prev;

	for (int i = 0; i < 10; i++) {
		cin >> mush[i];
	}


	for (int i = 0; i < 10; i++) {
		prev = total;
		total += mush[i];
		if (total == 100) {
			break;
		}
		if (total > 100) {
			if (abs(100 - prev) > abs(100 - total)) {
				break;
			}
			else if (abs(100 - prev) == abs(100 - total)) {
				break;
			}
			else {
				total = prev;
				break;
			}
		}
	}
	cout << total;
}