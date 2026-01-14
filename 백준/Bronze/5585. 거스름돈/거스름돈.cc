#include <iostream>

using namespace std;
int main() {
	int coin[6] = { 500, 100, 50, 10, 5, 1 };
	int money;
	int cnt = 0;
	cin >> money;
	money = 1000 - money;
	while (true) {
		if (money == 0) {
			cout << cnt;
			return 0;
		}
		for (int i = 0; i < 6; i++) {
			if (money >= coin[i]) {
				cnt++;
				money -= coin[i];
				break;
			}
		}
	}
}