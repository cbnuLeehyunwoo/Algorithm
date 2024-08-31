#include<iostream> 

using namespace std;

int main() {
	int N = 0; // 입력받을 케이스의 개수
	int x = 0;
	int y = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		cout << "Case" << " #" << i + 1 << ":" << " " << x << " + " << y << " = " << x + y << "\n";
	}
	return 0;
}