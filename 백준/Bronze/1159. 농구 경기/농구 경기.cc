#include <iostream>
#include <algorithm>
#include <string>
#include <map>


using namespace std;
map<char, int> m;
char result[151];
int index = 0;
int main() {

	for (char c = 'a'; c <= 'z'; c++) {
		m.insert({ c, 0 });
	}
	int N = 0;
	string str[151];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str[i];
		m[str[i][0]]++;

	}

	for (auto iter = m.begin(); iter != m.end(); iter++) {
		if (iter->second >= 5) {
			result[index] = iter->first;
			index++;
		}
	}
	if (index == 0) {
		cout << "PREDAJA";
		return 0;
	}

	sort(result, result + index);
	cout << result;
}