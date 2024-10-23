#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int cnt = 0;
	int tofind = 0;
	int trgt[101] = { 0, };
	for (int i = 0; i < n; i++) {
		cin >> trgt[i];
	}
	cin >> tofind;
	for (int i = 0; i < n; i++) {
		if (trgt[i] == tofind) {
			cnt++;
		}
	}
	cout << cnt;
}