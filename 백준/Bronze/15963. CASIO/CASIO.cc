#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
	unsigned long long int a = 0;
	unsigned long long int b = 0;
	cin >> a >> b;
	if (a == b) {
		cout << '1';
	}
	else
		cout << '0';
}