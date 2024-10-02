#include <iostream>
using namespace std;

int main() {
	int x = 0;
	float y = 0.0;
	cin >> x >> y;
	if (x >= (y / 2.0)) {
		cout << 'E';
	}
	else {
		cout << 'H';
	}
}