#include <iostream>
#include <string>


using namespace std;

int main() {
	int a, d, k;
	int index = 1;
	cin >> a >> d >> k;
	while (true) {
		if (k < -1000001 || k > 1000001) {
			cout << "X";
			return 0;
		}
		if (k == a) {
			cout << index;
			return 0;
		}
		k -= d;
		index++;
		
	}
}
