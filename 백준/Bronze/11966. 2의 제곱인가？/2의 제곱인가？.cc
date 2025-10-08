#include <iostream>

using namespace std;


bool check_2pow(int n) {
	int temp = n % 2;
	if (n == 1) return true;
	if (temp == 1) return false;
	return check_2pow(n / 2);
}

int main() {
	int n;
	cin >> n;
	cout << check_2pow(n);
}