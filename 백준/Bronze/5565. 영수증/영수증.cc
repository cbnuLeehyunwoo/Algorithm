#include <iostream>
using namespace std;

int main() {
	int total;
	cin >> total;
	for (int i = 0; i < 9; i++) {
		int temp;
		cin >> temp;
		total -= temp;
	}
	cout << total;
}