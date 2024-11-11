// 브루트 포스 알고리즘으로 해결
#include <iostream>
#include <string>

using namespace std;
#define RES_MAX 10000000000
							 
int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e; 
	// i = 4 전에는 가능한 경우가 없다..
	for (unsigned long long int i = 4; i <= RES_MAX; i++) {
		int count = 0;
		if (i % a == 0)
			count++;
		if (i % b == 0)
			count++;
		if (i % c == 0)
			count++;
		if (i % d == 0)
			count++;
		if (i % e == 0)
			count++;
		if (count >= 3) {
			cout << i;
			break;
		}
	}
}