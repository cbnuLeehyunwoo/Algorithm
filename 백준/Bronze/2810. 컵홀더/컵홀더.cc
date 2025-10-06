#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		if (str[i] == 'S') cnt++;
		else {
			cnt++;
			i++;
		}
	}
	if (cnt > n) cnt = n;
	cout << cnt;
}