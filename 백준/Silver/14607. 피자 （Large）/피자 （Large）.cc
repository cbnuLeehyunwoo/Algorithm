#include <iostream>
#include <vector>
using namespace std;

unsigned long long int pizza(int n) {
	if (n == 0 || n == 1) return 0;
	if (n == 2) return 1;
	return n * (n - 1) / 2 + pizza(n / 2) + pizza(n - n / 2);
}

int main() {
	unsigned long long int n; 
	cin >> n;
	cout << (n - 1) * n / 2;
}