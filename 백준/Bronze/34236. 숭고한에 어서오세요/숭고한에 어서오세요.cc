#include <iostream>

using namespace std;
int arr[101];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int gongcha = arr[1] - arr[0];
	cout << arr[n - 1] + gongcha;
}