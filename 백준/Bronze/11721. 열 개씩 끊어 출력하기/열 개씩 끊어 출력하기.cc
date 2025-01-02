#include <iostream>
#include <string>


using namespace std;

int main() {
	string input;
	cin >> input;
	for (int i = 0; i < input.size(); i++) {
		if (i != 0 && i % 10 == 0) {
			cout << "\n";
		}
		cout << input[i];
	}
}
