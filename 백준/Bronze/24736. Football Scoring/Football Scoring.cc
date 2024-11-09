#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t, f, s, p, c;
	cin >> t >> f >> s >> p >> c;
	int result1 = t * 6 + f * 3 + s * 2 + p * 1 + c * 2;
	cin >> t >> f >> s >> p >> c;
	int result2 = t * 6 + f * 3 + s * 2 + p * 1 + c * 2;

	cout << result1 << " " << result2;
}