#include <iostream>
#include <string>

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	int a = 100 - A;
	int b = 100 - B;
	int c = 100 - (a + b);
	int d = a * b;
	int q = d / 100;
	int r = d % 100;
	cout << a << " " << b << " " << c << " " << d << " " << q << " " << r << "\n";
	cout << c + q << " " << r;
}

  