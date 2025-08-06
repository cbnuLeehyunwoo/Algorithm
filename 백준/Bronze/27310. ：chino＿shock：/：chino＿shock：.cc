#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int bar = 0;
	int colon = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '_') bar++;
		else if (str[i] == ':') colon++;
	}

	cout << str.size() + colon + bar * 5;
	
}