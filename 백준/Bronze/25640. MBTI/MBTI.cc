#include <iostream>
#include <string>
using namespace std;

int main() {
	string jinho;
	int n = 0;
	cin >> jinho;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		if (temp == jinho) {
			cnt++;
		}
	}
	cout << cnt;
}