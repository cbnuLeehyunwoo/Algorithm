#include <iostream>
#include <map>
using namespace std;
map<char, int> m;
int main() {
	int n;
	char c;
	cin >> n;
	m['A'] = 0;
	m['C'] = 0;
	m['S'] = 0;
	m['I'] = 0;
	for (int i = 0; i < n; i++) {
		cin >> c;
		m[c]++;
	}
	cin >> c;
	cout << m[c];
}