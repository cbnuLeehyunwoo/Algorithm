#include <iostream>
using namespace std;

int main() {
	int hap[2];
	for (int i = 0; i < 2; i++) {
		int temp[3];
		cin >> temp[0] >> temp[1] >> temp[2];
		hap[i] = temp[0] * 3 + temp[1] * 20 + temp[2] * 120;
	}

	if (hap[0] > hap[1]) cout << "Max";
	else if (hap[0] < hap[1]) cout << "Mel";
	else cout << "Draw";
}