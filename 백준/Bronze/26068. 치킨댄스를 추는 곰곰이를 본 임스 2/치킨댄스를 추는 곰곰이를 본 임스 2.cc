#include <iostream>
#include <string>
#include <math.h>
#include <regex>
using namespace std;

int main() {
	int n = 0;
	int count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int day = 0;
		string temp;
		cin >> temp;
		if (temp.size() == 3) {
			count++;
		}
		if (temp.size() == 4) {
			int a = (temp[2] - '0') * 10 + (temp[3] - '0');
			if (a <= 90) {
				count++;
			}
		}
		if (temp.size() == 5) {
			continue;
		}
		

	}
	cout << count;
}