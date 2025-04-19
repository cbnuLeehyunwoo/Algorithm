#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int tmp = 0;
		cin >> tmp;
		if (tmp % 2 == 0) {
			cnt++;
		}
	}
	if (cnt > n - cnt) {
		cout << "Happy";
	}
	else
		cout << "Sad";
}