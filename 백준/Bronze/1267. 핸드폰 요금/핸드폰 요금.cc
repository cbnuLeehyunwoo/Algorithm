#include <iostream>

using namespace std;

int main() {
	int N = 0; // 이용한 통화 수
	cin >> N;
	int hap_y = 0;// 총 통화 시간 
	int hap_m = 0;

	int NC[21] = { 0, }; //각 통화 시간
	for (int i = 0; i < N; i++) {
		cin >> NC[i];  
		hap_y += ((NC[i] / 30) + 1) * 10;
		hap_m += ((NC[i] / 60) + 1) * 15;
	}
	if (hap_y == hap_m) {
		cout << "Y " << "M " << hap_y;
	}
	else if (hap_y > hap_m) {
		cout << "M " << hap_m;
	}
	else {
		cout << "Y " << hap_y;
	}
}
