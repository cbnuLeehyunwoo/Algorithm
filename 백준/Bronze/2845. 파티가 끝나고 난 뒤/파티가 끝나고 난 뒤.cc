#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
	int man = 0;
	int sjfqdl = 0;
	int arr[5] = { 0, };
	cin >> man >> sjfqdl;
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
	for (int i = 0; i <= 4; i++) {
		cout <<  arr[i] - man * sjfqdl << " ";
	}

}