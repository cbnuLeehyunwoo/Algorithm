#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int bears[3] = { 0, };
	for (int i = 0; i < 3; i++) {
		cin >> bears[i];
	}
	sort(bears, bears + 3);
	cout << bears[1];
}