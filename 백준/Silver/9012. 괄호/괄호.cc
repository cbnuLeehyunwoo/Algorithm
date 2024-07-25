#include <iostream>
#include <string>

using namespace std;

int main() {
	string VPS[10000];
	int N = 0; // 입력받을 문자열의 갯수
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x = 0;
		int y = 0;
		cin >> VPS[i];
		for (int j = 0; j < VPS[i].length(); j++) {
			if (VPS[i][j] == '(') {
				x++;
			}
			else if (VPS[i][j] == ')') {
				y++;
			}
			if (y > x) {	// 닫는 괄호의 수가 여는 괄호의 수 보다 커지면 VPS가 될 수 없다.
				cout << "NO\n";
				goto next;
			}
		}
		if (x == y) {		// 둘의 숫자가 같으면 VPS로 판단.
			cout << "YES\n";
			continue;
		}
		else {
			cout << "NO\n";
			continue;
		}
next:;
	}
	
	return 0;
}