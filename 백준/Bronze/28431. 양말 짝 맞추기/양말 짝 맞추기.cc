#include <iostream>
#include <map>
using namespace std;
map<int, int> m;

int main() {
	int input[5] = { 0, };
	for (int i = 0; i < 5; i++) {
		cin >> input[i];
		if (m.find(input[i]) == m.end()) {
			m.insert({ input[i], 1 });
		}
		else {
			m[input[i]]++;
		}
	}

	for (auto iter = m.begin(); iter != m.end(); iter++) {
		if (iter->second % 2 == 1) {
			cout << iter->first;
		}
	}
}