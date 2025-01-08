#include <iostream>
#include <string>

using namespace std;

int main() {
	int N = 0;
	bool is_changed = false;
	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++) {
		string input;
		getline(cin, input);
		if (input == "Never gonna give you up" ||
			input == "Never gonna let you down" ||
			input == "Never gonna run around and desert you" ||
			input == "Never gonna make you cry" ||
			input == "Never gonna say goodbye" ||
			input == "Never gonna tell a lie and hurt you" ||
			input == "Never gonna stop") {
		}
		else {
			is_changed = true;
		}
	}
	if (is_changed) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}