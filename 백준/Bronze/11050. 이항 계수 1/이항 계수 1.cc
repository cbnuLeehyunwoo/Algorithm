#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int factorial(int num) {
	if (num == 0) {
		return 1;
	}
	int result = 1;

	for (int i = num; i >= 1; i--) {
		result *= i;
	}
	return result;
}


int main() {  
	int n, k;
	cin >> n >> k;;
	cout << factorial(n) / (factorial(k) * factorial(n - k));

	return 0;
}