#include <string>
#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int jjaksu = 0;
	int holsu = 0;
	string temp;
	cin >> temp;

	for (int i = 0; i < n; i++) {
		if ((temp[i] - '0') % 2 == 0) {
			jjaksu++;
		}
		else
			holsu++;
	}

	if (jjaksu > holsu) {
		cout << 0;
	}
	else if (jjaksu < holsu) {
		cout << 1;
	}
	else
		cout << -1;
}