#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



int main() {
	int p[4];
	cin >> p[0] >> p[1] >> p[2] >> p[3];
	int x, y, r;
	cin >> x >> y >> r;

	for (int i = 0; i < 4; i++) {
		if (p[i] == x) {
			cout << i + 1;
			return 0;
		}
	}
	cout << 0;

	
}