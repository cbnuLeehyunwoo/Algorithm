#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
stack<char> s;
string str, bomb;

void printS() {
	string temp;
	while (!s.empty()) {
		temp += s.top();
		s.pop();
	}
	reverse(temp.begin(), temp.end());
	cout << temp;
}

void check() {
	if (s.size() < bomb.size()) return;

	string cand;
	for (int i = 0; i < bomb.size(); i++) {
		cand += s.top();
		s.pop();
	}
	reverse(cand.begin(), cand.end());
	if (cand == bomb) return;
	else {
		for (int i = 0; i < cand.size(); i++) {
			s.push(cand[i]);
		}
	}
}

int main() {
	cin >> str;
	cin >> bomb;

	for (int i = 0; i < str.size(); i++) {
		s.push(str[i]);
		if (i < bomb.size() - 1) {
			continue;
		}
		if (s.top() == bomb.back()) check();
	}
	if (s.empty()) cout << "FRULA";
	else printS();
}