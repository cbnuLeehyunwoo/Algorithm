#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	cin >> input;
	int result = 0;
	char prev = 'z';
	for (int i = 0; i < input.size(); i++) {
		if (input[i] <= prev) {
			result++;
		}
		prev = input[i];
	}
	cout << result;
}