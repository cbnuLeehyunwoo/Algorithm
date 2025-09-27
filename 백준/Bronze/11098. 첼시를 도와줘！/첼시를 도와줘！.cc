#include <iostream>
#include <map>
#include <string>

using namespace std;
map<int, string> d;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		int max = -1;
		string max_str;
		for (int i = 0; i < n; i++) {
			int a;
			string str;
			cin >> a >> str;
			if (a > max) {
				max = a;
				max_str = str;
			}
		}
		cout << max_str << "\n";
	}
}