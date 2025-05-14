#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string res = "";
	int cnt_5 = n / 5;
	int cnt_1 = n % 5;
	for (int i = 0; i < cnt_5; i++) {
		res += 'V';
	}
	for (int i = 0; i < cnt_1; i++) {
		res += 'I';
	}
	cout << res;
}