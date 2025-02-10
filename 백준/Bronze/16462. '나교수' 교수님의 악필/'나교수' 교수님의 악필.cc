#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
	double n = 0;
	double sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		for (int i = 0; i < temp.size(); i++) {
			if (temp[i] == '6' || temp[i] == '0') {
				temp[i] = '9';
			}
		}
		int score = stoi(temp);
		if (score > 100) {
			score = 100;
		}

		sum += score;
	}
	cout << round(sum / n);
}
