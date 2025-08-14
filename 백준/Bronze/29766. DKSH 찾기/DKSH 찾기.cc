#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	cin >> input;
	string trgt = "DKSH";

	int cnt = 0;
	size_t pos = input.find(trgt);
	while (pos != string::npos) {
		cnt++;
		pos = input.find(trgt, pos + 1);
	}
	cout << cnt;
}