#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	cin >> input;
	if(input == "NLCS"){
		cout << "North London Collegiate School";
	}
	else if (input == "BHA") {
		cout << "Branksome Hall Asia";
	}
	else if (input == "KIS") {
		cout << "Korea International School";
	}
	else if (input == "SJA") {
		cout << "St. Johnsbury Academy";
	}

	return 0;
}