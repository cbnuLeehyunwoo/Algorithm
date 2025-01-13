#include <iostream>
#include <string>

using namespace std;

int main() {
	int A = 0; // X사의 1리터당 요금
	int B = 0; // Y사의 1리터당 요금
	int C = 0; // Y사의 기본요금 상한
	int D = 0; // Y사의 1리터 당 추가요금
	int P = 0; // 한 달간의 수도 양

	cin >> A;
	cin >> B;
	cin >> C;
	cin >> D;
	cin >> P;
	if (P <= C) {
		cout << min(A * P, B);
	}
	else {
		cout << min(A * P, B + (P - C) * D);
	}
}

  