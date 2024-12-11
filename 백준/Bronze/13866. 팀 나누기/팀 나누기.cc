#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	int arr[4] = { 0, };
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
	int min = 10001;
	int hap = arr[0] + arr[1] + arr[2] + arr[3];
	for (int i = 0; i < 4; i++) {
		int temp1 = arr[0] + arr[i];
		int temp2 = hap - temp1;
		int cha = abs(temp2 - temp1);
		if (min > cha) {
			min = cha;
		}
	}
	cout << min;
}