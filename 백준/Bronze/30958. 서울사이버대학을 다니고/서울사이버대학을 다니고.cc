#include <iostream>
#include <map>
#include <string>
using namespace std;
map<char, int> m;

void init() {
	for (char c = 'a'; c <= 'z'; c++) {
		m.insert({ c, 0 });
	}
}

int main() {
	init();
	int N;
	string str;
	cin >> N;
	cin.ignore();
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		if (m.find(str[i]) == m.end()) continue;
		m[str[i]]++;
	}
	int max = -1;
	for (char c = 'a'; c <= 'z'; c++) {
		if (m[c] > max) max = m[c];
	}
	cout << max;
}