#include <iostream>
#include <queue>
#include <string>


using namespace std;
int main() {
	int result = 0;
	int arr[5] = { 0, };
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if (arr[i] < 40) {
			arr[i] = 40;
		}
		result += arr[i];
	}
	cout << result / 5;

}
