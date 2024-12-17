#include <iostream>

using namespace std;

int main() {
	int a1, a2;
	int b1, b2;

	cin >> a1 >> a2;
	cin >> b1 >> b2;
	
	if ((a2 + b1) < (a1 + b2))
		cout << a2 + b1;
	else
		cout << a1 + b2;
}