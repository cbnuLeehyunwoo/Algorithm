#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int temp;
		cin >> temp;
		for (int i = 0; i < temp / 5; i++) {
			cout << "++++" << " ";
		}
		for (int i = 0; i < temp % 5; i++) {
			cout << "|";
		}
		cout << "\n";
	}
}