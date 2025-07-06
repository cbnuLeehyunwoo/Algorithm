#include <iostream>
#include <string>
using namespace std;

bool flag_r = false;
bool flag_o = false;
bool flag_y = false;
bool flag_g = false;
bool flag_b = false;
bool flag_i = false;
bool flag_v = false;

bool flag_R = false;
bool flag_O = false;
bool flag_Y = false;
bool flag_G = false;
bool flag_B = false;
bool flag_I = false;
bool flag_V = false;

int main() {
	int N;
	cin >> N;
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'r') flag_r = true;
		else if (str[i] == 'o') flag_o = true;
		else if (str[i] == 'y') flag_y = true;
		else if (str[i] == 'g') flag_g = true;
		else if (str[i] == 'b') flag_b = true;
		else if (str[i] == 'i') flag_i = true;
		else if (str[i] == 'v') flag_v = true;
		else if (str[i] == 'R') flag_R = true;
		else if (str[i] == 'O') flag_O = true;
		else if (str[i] == 'Y') flag_Y = true;
		else if (str[i] == 'G') flag_G = true;
		else if (str[i] == 'B') flag_B = true;
		else if (str[i] == 'I') flag_I = true;
		else if (str[i] == 'V') flag_V = true;
	}
	bool lower = flag_r && flag_o && flag_y && flag_g && flag_b
		&& flag_i && flag_v;
	bool upper = flag_R && flag_O && flag_Y && flag_G && flag_B
		&& flag_I && flag_V;
	if (lower && upper) cout << "YeS";
	else if (lower) cout << "yes";
	else if (upper) cout << "YES";
	else cout << "NO!";
}