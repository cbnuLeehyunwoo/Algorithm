#include<iostream>
using namespace std;

int main() {
	int	cnt = 0;
	int max = 0;
	int min = 0;
	int num = 0;
	cin >> cnt;

	for (int i = 0; i < cnt; i++) {
		cin >> num;
		if (i == 0) {
			min = num;
			max = num;
			continue;
		}
		if (num > max) {
			max = num;
		}
		if (num < min) {
			min = num;
		}
	}
	cout << min << " " << max;
	return 0;
}