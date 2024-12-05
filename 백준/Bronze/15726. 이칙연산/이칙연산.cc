#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	long double A, B, C;
	cin >> A >> B >> C;
	long double res1 = A * B / C;
	long double res2 = A / B * C;
	if (res1 >= res2) {
		cout << (int)res1;
	}
	if (res1 < res2) {
		cout << (int)res2;
	}
}