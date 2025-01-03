#include <iostream>
#include <string>


using namespace std;
int n = 0; // 수열의 길이
int q = 0; // 연산을 수행할 횟수
int arr[200001] = { 0, };
int s_index = 0; // 첫 번째 인덱스
int e_index = 0; // 마지막 인덱스
void case_1() {
	int a, b; // a번째 요소 에 b를 더함
	cin >> a >> b;
	arr[(s_index + a - 1) % n] += b;
}

void case_2() {
	int a; // 오른쪽으로 a칸 시프트
	cin >> a;
	s_index = (s_index + (n - a)) % n;
	e_index = (e_index + (n - a)) % n;
}

void case_3() {
	int a; // 왼쪽으로 a칸 시프트
	cin >> a;
	s_index = (s_index + a) % n;
	e_index = (e_index + a) % n;
}

void display() {
	int i;
	// 마지막 인덱스값은 접근하지 못하기 때문에 외부 변수로 선언하고 따로 출력
	for (i = s_index; i != e_index; i = (i + 1) % n) {
		cout << arr[i] << " ";
	}
	cout << arr[i];
}
int main() {
	cin >> n >> q;
	e_index = n - 1;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < q; i++) {
		int case_t;
		cin >> case_t;
		if (case_t == 1) {
			case_1();
		}
		else if (case_t == 2) {
			case_2();
		}
		else if (case_t == 3) {
			case_3();
		}
	}
	display();
}
