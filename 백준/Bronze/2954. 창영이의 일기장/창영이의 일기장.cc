#include <iostream>
#include <string>
#include <list>
#include <stack>
#include <algorithm>
using namespace std;
stack <char> s;
string res = "";

bool ismoeum(char c) {
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return true;
	else
		return false;
}


int main() {
	string str;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		s.push(str[i]);
	}
	while (!s.empty()) {
		char c = s.top();
		s.pop();
		if (ismoeum(c)) {
			if (s.top() == 'p') {
				s.pop();
				if (s.top() == c) {
					s.pop();
				}
				else {
					res.push_back('p');
					res.push_back(s.top());
				}
			}
			else
				res.push_back(s.top());
		}
		res.push_back(c);
	}
	reverse(res.begin(), res.end());
	cout << res;
}