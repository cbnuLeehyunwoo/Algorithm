#include <iostream>

using namespace std;

int main() {
	int N = 0;
	int res = 1;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		res *= i;
	}
	cout << res;
}