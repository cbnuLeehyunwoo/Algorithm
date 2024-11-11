// 브루트 포스 알고리즘으로 해결
#include <iostream>
#include <string>

using namespace std;

							 
int main() {
	unsigned long int N;
	int F;
	cin >> N;
	cin >> F;
	for (int i = 0; i <= 100; i++) {
		N /= 100;
		N *= 100;
		if ((N + i) % F == 0) {
			if (i < 10) {
				cout << 0 << i;
			}
			else
				cout << i;
			return 0;
		}
		
	}
}