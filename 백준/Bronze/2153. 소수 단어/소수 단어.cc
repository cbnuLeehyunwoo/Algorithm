#include <iostream>
#include <string>
#include <map>
using namespace std;
map<char, int> m;
int main() {
	int idx = 1;
	for (char c = 'a'; c <= 'z'; c++) {
		m.insert({ c, idx });
		idx++;
	}
	for (char c = 'A'; c <= 'Z'; c++) {
		m.insert({ c, idx });
		idx++;
	}


	string str;
	cin >> str;
	int sum = 0;
	for (int i = 0; i < str.size(); i++) {
		sum += m[str[i]];
	}

	bool is_prime = true;

	for (int i = 2; i * i <= sum; i++) {
		if (sum % i == 0) {
			is_prime = false;
			break;
		}
	}
	
	if (is_prime) cout << "It is a prime word.";
	else cout << "It is not a prime word.";
}