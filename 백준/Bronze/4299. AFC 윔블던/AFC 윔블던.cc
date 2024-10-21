#include <iostream>

using namespace std;

int main() {
	int sum, gap; cin >> sum >> gap;

	int A = (sum + gap) / 2;
	int B = A - gap;

	if ((sum + gap) % 2 != 0 || sum < gap || sum == 0 && gap != 0 || sum != 0 && gap == 0) cout << -1;
	else {
		if (A > B) cout << A << " " << B;
		else cout << B << " " << A;
	}

	return 0;
}
