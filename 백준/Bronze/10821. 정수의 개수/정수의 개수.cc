#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int cnt = 0;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ',') cnt++;
	}
	cout << cnt + 1;
}