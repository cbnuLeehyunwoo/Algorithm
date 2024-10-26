#include <iostream>
#include <string>
#include <map>	
using namespace std;

map<char, int> m;
int main() {
	string str;
	cin >> str;

	for (char c = 'a'; c <= 'z'; c++)
	{
		m.insert({ c, 0 });
	}
	for (int i = 0; i < str.size(); i++) {
		if (m.find(str[i]) != m.end()) {
			m[str[i]]++;
		}
		
			
	}

	for (const auto& pair : m) {
		cout << pair.second << " ";
	}
}