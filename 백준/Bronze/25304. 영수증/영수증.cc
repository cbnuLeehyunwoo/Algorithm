#include <iostream>

using namespace std;
int main() {
	int X = 0;  // 영수증에 적힌 총 금액
	int N = 0;  // 영수증에 적힌 구매한 물건의 종류
	int a[101] = { 0, }; // 각 물건의 가격
	int b[101] = { 0, }; // 각 물건의 개수
	int sum = 0;

	cin >> X;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i] >> b[i];
		sum += a[i] * b[i];
	}
	if (sum == X) {
		cout << "Yes";
	}
	else
		cout << "No";

	return 0;
}