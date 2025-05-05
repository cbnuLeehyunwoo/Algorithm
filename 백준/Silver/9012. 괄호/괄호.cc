#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;

	while (N--) {
		string s;
		cin >> s;
		int cnt = 0;
		bool isValid = true;

		for (char c : s) {
			if (c == '(') {
				cnt++;
			}
			else if (c == ')') {
				cnt--;
				if (cnt < 0) { 
					isValid = false;
					break;
				}
			}
		}

		if (isValid && cnt == 0) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}
