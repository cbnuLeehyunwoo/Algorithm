#include <iostream>
#include <queue>
#include <string>


using namespace std;
int main() {
	int arr1[4] = { 0, };
	int arr2[4] = { 0, };

	int result1 = 0;
	int result2 = 0;
	cin >> arr1[0] >> arr1[1] >> arr1[2] >> arr1[3];
	cin >> arr2[0] >> arr2[1] >> arr2[2] >> arr2[3];

	for (int i = 0; i < 4; i++) {
		result1 += arr1[i];
		result2 += arr2[i];
	}
	if (result1 >= result2) 
		cout << result1;
	else
		cout << result2;
}
