#include <iostream>
using namespace std;

int euclidean(int a, int b) {
	a %= b;
	if (a == 0) {
		return b;
	}
	else {
		return euclidean(b, a);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long int a, b;

	cin >> a >> b;
	if (a > b) {
		cout << a * b / euclidean(a, b);
	}
	else
		cout << a * b / euclidean(b, a);
	
}