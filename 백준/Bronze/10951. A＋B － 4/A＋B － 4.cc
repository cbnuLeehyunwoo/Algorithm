#include<iostream>
using namespace std;

int main() {
	int A = 0;
	int B = 0;
	while (true) {
		cin >> A >> B;
		if (cin.eof()) {
			break;
		}
		else
			cout << A + B << endl;
	}
	return 0;
}