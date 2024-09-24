#include <iostream>
#include <string>

using namespace std;
int main() {
	int N = 0;      //  찬솔이가 지하철 역까지 걸어가는 시간 
	int A = 0;      //  다음 버스 도착까지 남은 시간
	int B = 0;      //  다음 지하철 도착까지 남은 시간
	cin >> N >> A >> B;

	if (B == A) {
		cout << "Anything";
	}
	else if (B > A) {
		cout << "Bus";
	}
	else
		cout << "Subway";
	return 0;
}