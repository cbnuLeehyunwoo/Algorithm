#include <iostream>
using namespace std;

int main() {
	int n;
	int cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		cnt += temp;
	}
	cout << cnt - n + 1;
}