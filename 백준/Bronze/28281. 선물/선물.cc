#include <iostream>
#include <climits>
using namespace std;

int main() {
	int N, X;
	cin >> N >> X;
	int price_arr[100001] = { 0, };
	int min = INT_MAX;

	for (int i = 0; i < N; i++) {
		cin >> price_arr[i];
	}

	for (int i = 1; i <= N - 1; i++) {
		int temp = (price_arr[i] + price_arr[i - 1]) * X;
		if (temp < min) {
			min = temp;
		}
	}
	cout << min;
}