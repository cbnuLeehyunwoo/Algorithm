#include <iostream>
#include <string>

using namespace std;

int main() {
	double K ;
	double D1, D2;
	cin >> K;
	cin >> D1 >> D2;
	double height_pow = 0;
	double temp = (D1 - D2) / 2.0;
	height_pow = K * K - temp * temp;
	cout << height_pow;
}