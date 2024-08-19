#include <iostream>
#include <string>
using namespace std;

int main() {
	int T = 0; //테스트 케이스의 개수
	int A = 0; 
	int B = 0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		cout << "Case #" << i + 1 << ": " << A + B << endl;
	}
}
