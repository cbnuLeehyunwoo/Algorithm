#include <iostream>

using namespace std;

int main() {
	int cnt = 0;
	int N = 0;
	cin >> N;
	int A, B, C;
	cin >> A >> B >> C;
	if (N >= A) {
		cnt += A;
	}
	else {
		cnt += N;
	}

	if (N >= B) {
		cnt += B;
	}
	else {
		cnt += N;
	}

	if (N >= C) {
		cnt += C;
	}
	else {
		cnt += N;
	}

	cout << cnt;
}