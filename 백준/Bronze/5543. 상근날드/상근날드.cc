#include <iostream>
#include <climits>
using namespace std;

int main() {
	int burger[3] = { 0, };
	cin >> burger[0];
	cin >> burger[1];
	cin >> burger[2];
	int drink[2] = { 0, };
	cin >> drink[0];
	cin >> drink[1];
	int min = INT_MAX;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (min > burger[i] + drink[j]) {
				min = burger[i] + drink[j];
			}
		}
	}
	cout << min - 50;
}