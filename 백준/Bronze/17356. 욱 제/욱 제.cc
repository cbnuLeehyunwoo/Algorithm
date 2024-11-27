#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	float M = (B - A) / 400.0;
	cout << 1.0 / (1 + pow(10, M));
}