#include <iostream>
#include <stdio.h>
using namespace std;


int main() {
	double n = 0; // 경태가 모은 출석 도장의 개수
	double p = 0; // 구매할 물건의 가격
	cin >> n;
	cin >> p;
	if (n >= 20) {
		p = min(p * 0.75, p - 2000.0);
	}
	else if (n >= 15) {
		p = min(p - 2000.0, p * 0.9);
	}
	else if (n >= 10) {
		p = min(p * 0.9, p - 500.0);
	}
	else if (n >= 5) {
		p -= 500;
	}
	if (p <= 0) {
		cout << 0;
	}
	else {
		cout << p;
	}

}