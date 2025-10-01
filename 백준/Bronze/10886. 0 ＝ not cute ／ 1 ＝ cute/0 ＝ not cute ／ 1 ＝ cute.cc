#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int vote;
		cin >> vote;
		if (vote == 1) {
			cnt++;
		}
	}
	if (2 * cnt < n) cout << "Junhee is not cute!";
	else cout << "Junhee is cute!";

}