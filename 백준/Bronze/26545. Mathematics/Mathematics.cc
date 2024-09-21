#include <iostream>
#include <string>

using namespace std;
int main() {
	int N = 0; // 입력받을 수의 개수
	int sum = 0;  // 입력받은 수의 총합
	int temp = 0; // 입력받은 수를 잠시 저장
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		sum += temp;
	}
	cout << sum;
	return 0;
}