#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s = to_string(n);
	bool hav7 = false;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '7') hav7 = true;
	}
	if (!hav7 && n % 7 != 0) cout << 0;
	else if (!hav7 && n % 7 == 0) cout << 1;
	else if (hav7 && n % 7 != 0) cout << 2;
	else cout << 3;
}