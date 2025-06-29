#include <iostream>

using namespace std;
int main() {
	int N;
	cin >> N;
	for (int j = 0; j < N + 2; j++) {
		cout << "@";
	}
	cout << "\n";
	for (int i = 0; i < N; i++) {
		cout << "@";
		for (int j = 0; j < N; j++) {
			cout << " ";
		}
		cout << "@";
		cout << "\n";
	}
	for (int j = 0; j < N + 2; j++) {
		cout << "@";
	}
}