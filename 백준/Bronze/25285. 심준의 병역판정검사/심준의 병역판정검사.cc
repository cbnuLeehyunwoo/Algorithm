#include <iostream>

using namespace std;

int main() {
	int n = 0; // 병역검사를 받는 사람의 수
	cin >> n;
	for (int i = 0; i < n; i++) {
		double h, w; // 키와 몸무게
		cin >> h >> w;
		double bmi = w / (h* 0.01 * h* 0.01);
		if (h < 140.1) {
			cout << 6;
		}
		else if (h < 146) {
			cout << 5;
		}
		else if (h < 159) {
			cout << 4;
		}
		else if (h < 161) {
			if (bmi >= 16 && bmi < 35) {
				cout << 3;
			}
			else {
				cout << 4;
			}
		}
		else if (h < 204) {
			if (bmi >= 20 && bmi < 25) {
				cout << 1;
			}
			else if ((bmi >= 18.5 && bmi < 20.0) || (bmi >= 25.0 && bmi < 30.0)) {
				cout << 2;
			}
			else if ((bmi >= 16.0 && bmi < 18.5) || (bmi >= 30 && bmi < 35)) {
				cout << 3;
			}
			else {
				cout << 4;
			}
		}
		else if (h >= 204) {
			cout << 4;
		}
		cout << "\n";
	}
}