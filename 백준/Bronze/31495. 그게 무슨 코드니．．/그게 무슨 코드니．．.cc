#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str;

	getline(cin, str);
	if (str == "\"\"" || str == "\"") cout << "CE";
	else if (str.front() == '\"' && str.back() == '\"') {
		cout << str.substr(1, str.size() - 2);
	}
	else cout << "CE";
}