#include <iostream>

using namespace std;

int main() {
	int N = 0;
	cin >> N;
	cout << N * 78 / 100 << ' ' << N * 80 / 100 + N * 20 / 100 * 78 / 100;
}