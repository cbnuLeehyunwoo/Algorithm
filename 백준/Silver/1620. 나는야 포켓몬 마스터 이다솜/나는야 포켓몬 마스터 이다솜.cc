#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;
unordered_map<string, int> smap;
unordered_map<int, string> imap;
int n, m;

bool isNum(string str) {
	return !str.empty() && all_of(str.begin(), str.end(), ::isdigit);
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		string temp;
		cin >> temp;
		smap.insert({ temp, i });
		imap.insert({ i, temp });
	}

	for (int i = 1; i <= m; i++) {
		string temp;
		cin >> temp;
		if (isNum(temp)) {
			cout << imap[stoi(temp)] << "\n";
		}
		else {
			cout << smap[temp] << "\n";
		}
	}
}