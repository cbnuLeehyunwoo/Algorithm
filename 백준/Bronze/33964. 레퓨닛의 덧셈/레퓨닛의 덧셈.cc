#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int x = max(a, b);
	int y = min(a, b);
	for (int i = 0; i < x - y; i++) {
		cout << "1";
	}
	for (int i = 0; i < y; i++) {
		cout << "2";
	}
}