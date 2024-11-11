// 브루트 포스 알고리즘으로 해결
#include <iostream>
#include <string>

using namespace std;
int arr[81] = { 0, };
							 
int main() {
	int S1, S2, S3;
	int max = 0;
	int result = 0;
	cin >> S1 >> S2 >> S3;
	for (int i = 1; i <= S1; i++) {
		for (int j = 1; j <= S2; j++) {
			for (int k = 1; k <= S3; k++) {
				if (arr[i + j + k] == 0) {
					arr[i + j + k] = 1;
				}
				else
					arr[i + j + k]++;
			}
		}
	}
	for (int i = 0; i < 81; i++) {
		if (max < arr[i]) {
			max = arr[i];
			result = i;
		}
	}
	cout << result;
}