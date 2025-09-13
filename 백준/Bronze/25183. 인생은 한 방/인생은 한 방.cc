#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string str;
	cin >> N;
	cin >> str;
	int strk = 0;
	bool clear = false;
	int prev = str[0];
	for (int i = 1; i < N; i++) {
		if (prev + 1 == int(str[i]) || prev - 1 == int(str[i])) strk++;
		else strk = 0;

		if (strk == 4) clear = true;
		prev = str[i];
	}
	if (clear) cout << "YES";
	else cout << "NO";
}