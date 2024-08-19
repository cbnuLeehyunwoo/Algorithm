#include <iostream>
#include <string>
using namespace std;
string password[1001];

int main() {
	int A = 0;  // 경쟁사 제품의 가격
	int B = 0;  // 경쟁사 제품의 성능
	int C = 0;  // 워보이의 가격

	cin >> A >> B >> C;

	cout << (B / A) * 3 * C;  // 경쟁사의 가성비(B/A) * 3 * 가격 = 워보이의 성능
	return 0;
}
