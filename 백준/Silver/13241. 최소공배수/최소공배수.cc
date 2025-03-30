#include <iostream>
using namespace std;

int GCD(int a, int b) {
	a %= b;
	if (a == 0) {
		return b;
	}
	else {
		return GCD(b, a);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long int a, b;

	cin >> a >> b;
	if (a > b) {
		cout << a * b / GCD(a, b);
	}
	else
		cout << a * b / GCD(b, a);

}