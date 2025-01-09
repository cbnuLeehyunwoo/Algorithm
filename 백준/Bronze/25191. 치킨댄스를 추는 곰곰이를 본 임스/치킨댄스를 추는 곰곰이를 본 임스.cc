#include <iostream>
#include <map>
using namespace std;

int main() {
	int N;
	int A, B;
	cin >> N;
	cin >> A >> B;
	int cnt = 0;
	while (true) {
		if (N == 0) {
			cout << cnt;
			break;
		}
		if ((A == 0 || A == 1) && B == 0) {
			cout << cnt;
			break;
		}
		N--;
		if (A == 0) {
			B--;
		}
		else if (B == 0) {
			A -= 2;
		}
		else {
			B--;
		}
		cnt++;
	}
}

  