#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int N = 0;
	cin >> N;
	int plan[121] = { 0, };
	int result = 0;
	for (int i = 0; i < N; i++) {
		cin >> plan[i];
	}
	
	for (int i = 0; i < N; i++) {
		result += plan[i] + 8;
	}
	
	result -= 8;
	int res_day = 0;
	int res_hour = result;

	while (true) {
		if (res_hour < 24) {
			cout << res_day << " " << res_hour;
			return 0;
		}
		res_day++;
		res_hour -= 24;
	}
}