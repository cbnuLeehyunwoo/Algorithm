#include <iostream>
#include <string>

using namespace std;

int main() {
	int cnt = 0;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		int OXcnt = 0;
		for (int i = 0; i < temp.size(); i++) {
			if (temp[i] == 'O') {
				OXcnt++;
			}
			else OXcnt--;
		}
		if (OXcnt > 0) cnt++;
	}
	cout << cnt;
}