#include <iostream>
#include <string>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	int K, X;
	cin >> K >> X;
	int cnt = 0;
	for (int i = A; i <= B; i++) {
		if (i > K && i - K <= X ) {
			cnt++;
		}
		else if (i <= K && K - i <= X) {
			cnt++;
		}
	}


	if (cnt == 0) {
		cout << "IMPOSSIBLE";
		return 0;
	}
	cout << cnt;
}