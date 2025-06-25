#include <iostream>
#include <string>
using namespace std;
bool flag_k = false;
bool flag_l = false;
bool flag_p = false;

bool check(string str) {
	if (str[0] == 'p') {
		flag_p = true;
		return true;
	}
	else if (str[0] == 'l') {
		flag_l = true;
		return true;
	}
	else if (str[0] == 'k') {
		flag_k = true;
		return true;
	}
	else return false;
}

int main() {
	string A, B, C;
	cin >> A >> B >> C;
	check(A);
	check(B);
	check(C);
	if (flag_k && flag_l && flag_p) {
		cout << "GLOBAL";
	}
	else cout << "PONIX";
}