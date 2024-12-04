#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



int main() {
	int n = 0;
	cin >> n;
	int arr[101];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << '=';
		}
		cout << '\n';
	}
}