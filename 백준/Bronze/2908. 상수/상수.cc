#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	stoi(a) > stoi(b) ? cout << a : cout << b;
}