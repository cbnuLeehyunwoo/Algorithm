#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	int arr[4] = { 0, };
	cin >> arr[0] >> arr[1] >> arr[2];
	int min_index = -1;
	int min = 101;
	int result = arr[0] + arr[1] + arr[2];
	if (result >= 100) {
		cout << "OK";
	}
	else {
		for (int i = 0; i < 3; i++) {
			if (min > arr[i]) {
				min = arr[i];
				min_index = i;
			}
		}
		if (min_index == 0) {
			cout << "Soongsil";
		}
		else if (min_index == 1) {
			cout << "Korea";
		}
		else if (min_index == 2) {
			cout << "Hanyang";
		}
	}
}