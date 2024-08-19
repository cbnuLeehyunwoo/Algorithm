#include <iostream>
#include <string>
using namespace std;
string password[1001];

int main() {
	int N = 0;   // 비밀번호의 개수
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> password[i];
		if (password[i].length() >= 6 && password[i].length() <= 9) {  // 6자리 이상 9자리 이하의 문자열만 비밀번호로 간주
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}
	return 0;
}
