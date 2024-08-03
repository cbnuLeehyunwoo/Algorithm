#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int time[5] = { 0, };
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		cin >> time[i];
		sum += time[i];
	}

	cout << sum / 60 << "\n";
	cout << sum % 60;

	return 0;
}