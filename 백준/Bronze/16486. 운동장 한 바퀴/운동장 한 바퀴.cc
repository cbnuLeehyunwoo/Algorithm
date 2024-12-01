#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const double PI = 3.141592;
int main() {
	double d1 = 0;
	double d2 = 0;
	cin >> d1;
	cin >> d2;
	cout << fixed << setprecision(6) << d1 * 2.0 + 2.0 * d2 * PI;
}