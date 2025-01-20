#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	string str;
	cin >> str;
	for (int i = 0; i < n; i++) {
		if (str[i] == 'l') {
			str[i] = 'L';
		}
		else if (str[i] == 'I') {
			str[i] = 'i';
		}
	}
	cout << str;
}