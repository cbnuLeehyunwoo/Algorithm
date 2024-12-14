#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	int cnt = 0;
	while (true) {
		int temp;

		cin >> temp;
		if (temp == -1) {
			break;
		}
		cnt += temp;
	}
	cout << cnt;
}