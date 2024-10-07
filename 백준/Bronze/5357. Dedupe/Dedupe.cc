#include <iostream>

using namespace std;

int main() {
	int N = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		char input[101];
		char result[101];
		int index = 0;
		cin >> input;
		for (int i = 0; i <= sizeof(input); i++) {
			if (i == 0) {
				result[index] = input[i];
				index++;
				continue;
			}
			if (input[i] != input[i - 1]) { // 이전 인덱스의 값과 다르다면
				result[index] = input[i];   // 새로운 배열에 넣는다
				index++;
			}
		}
		cout << result << "\n";
	}
}