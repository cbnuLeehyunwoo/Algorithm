#include <iostream>
#include <string>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	string input;
	cin >> input;
	int cnt = 0;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u') {
			cnt++;
		}
	}
	cout << cnt;
}