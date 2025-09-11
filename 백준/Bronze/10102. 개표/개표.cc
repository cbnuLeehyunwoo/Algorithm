#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	int n;
	cin >> n;
	cin >> str;
	int cnt_a = 0;
	int cnt_b = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'A') cnt_a++;
		else if (str[i] == 'B') cnt_b++;
	}
	if (cnt_a > cnt_b) cout << "A";
	else if (cnt_a < cnt_b) cout << "B";
	else cout << "Tie";
}