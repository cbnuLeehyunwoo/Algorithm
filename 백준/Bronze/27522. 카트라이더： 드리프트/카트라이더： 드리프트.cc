#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int toint(string str, bool isblue)
{
	int res = 0;
	res += (str[0] - '0') * 1000000;
	res += (str[2] - '0') * 100000;
	res += (str[3] - '0') * 10000;
	res += (str[5] - '0') * 1000;
	res += (str[6] - '0') * 100;
	res += (str[7] - '0') * 10;
	if (isblue) {
		res += 1;
	}
	return res;
}
int main() {
	int res[9];
	int score[8] = { 10, 8, 6, 5, 4, 3, 2, 1 };
	bool isblue = false;
	int res_r = 0;
	int res_b = 0;
	for (int i = 0; i < 8; i++) {
		string temp;
		getline(cin, temp);
		if (temp[9] == 'B') {
			isblue = true;
		}
		res[i] = toint(temp, isblue);
		isblue = false;
	}
	sort(res, res + 8);
	for (int i = 0; i < 8; i++) {
		if (res[i] % 2 == 0) {
			res_r += score[i];
		}
		else
			res_b += score[i];
	}
	if (res_r > res_b) {
		cout << "Red";
	}
	else {
		cout << "Blue";
	}
}


