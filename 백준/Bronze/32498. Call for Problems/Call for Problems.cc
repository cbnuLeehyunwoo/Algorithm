#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
	int n = 0;
	int odd_cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (tmp % 2 == 1) {
			odd_cnt++;
		}
	}
	cout << odd_cnt;
}