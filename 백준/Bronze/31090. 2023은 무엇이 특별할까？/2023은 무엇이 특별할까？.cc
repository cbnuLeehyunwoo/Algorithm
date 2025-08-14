#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		int last = (input[2] - '0') * 10 + input[3] -'0';
		int year = stoi(input) + 1;
		if (year % last == 0) cout << "Good\n";
		else cout << "Bye\n";
	}
}