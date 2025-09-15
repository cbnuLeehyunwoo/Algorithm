#include <iostream>
#include <string>

using namespace std;

int main() {
	int cnt = 0;
	string str;
	cin >> str;
	int prev = -11;
	for (int i = 0; i < str.size() - 2; i++) {
		if (prev + 1 != str[i]) {
			if (str[i] + 1 == str[i + 1] && str[i + 1] + 1 == str[i + 2] && str[i + 2] + 1 != str[i + 3]) cnt++;
		}
		prev = str[i];
	}
	cout << cnt;
}