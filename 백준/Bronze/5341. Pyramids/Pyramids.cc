#include <iostream> 

using namespace std;

int main() {
	int N = 0; // 바닥의 블록 개수
	int result = 0;
	while (true) {
		cin >> N;
		if (N == 0) {
			return 0;
		}
		for (int i = N; i >= 0; i--) {
			result += i;
		}
		cout << result << "\n";
		result = 0;
	}
	
}