#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N = 0; // 출력할 줄의 개수
	cin >> N;
	for (int i = N; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << "*";
			if (i == 1) {
				return 0;
			}
		}
		cout << "\n";
	}
	return 0;
  }