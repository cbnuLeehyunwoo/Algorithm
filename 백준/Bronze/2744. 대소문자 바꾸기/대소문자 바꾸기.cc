#include <iostream>
#include <string>

using namespace std;
int main() {
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32; // 32를 빼면 대문자 아스키값이 된다.
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32;  // 32를 더하면 소문자 아스키값이 된다
		}
	}
	cout << str;
	return 0;
	
}