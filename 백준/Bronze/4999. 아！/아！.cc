#include <iostream>
#include <string>

using namespace std;

int main() {
	string jaehwan;
	string doctor;

	cin >> jaehwan;
	cin >> doctor;

	if (jaehwan.length() < doctor.length()) {
		cout << "no";
	}
	else
		cout << "go";
	return 0;
}