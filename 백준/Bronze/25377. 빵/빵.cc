#include <iostream>
#include <string>
using namespace std;
#define DEFAULT 1001
int main() {
	int N = 0;
	int min = DEFAULT;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int A, B;
		cin >> A >> B;
		if (A > B) {
			continue;
		}
		else if (A <= B) {
			if (B < min) {
				min = B;
			}
		}
	}
	if (min == DEFAULT) {
		cout << -1;
	}
	else {
		cout << min;
	}
}