#include <iostream>
#include <string>

using namespace std;
int main() {
	int a = 0; // 크리스마스 트리의 암페어를 나타내는 정수
	int w = 0; // 후보 어댑터의 와트
	int v = 0; // 후보 어댑터의 볼트

	cin >> a;
	cin >> w >> v;

	if (a <= w / v) {
		cout << "1";
	}
	else
		cout << "0";
	return 0;
}