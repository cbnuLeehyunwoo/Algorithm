#include <iostream>

using namespace std;

int main() {
	int H = 0;
	int W = 0;
	cin >> H;
	cin >> W;
	if (H >= W) {
		cout << (W / 2.0) * 100;
	}
	else {
		cout << (H / 2.0) * 100;
	}
}
