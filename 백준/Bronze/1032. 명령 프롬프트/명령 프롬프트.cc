#include <iostream>
#include <string>
using namespace std;
string arr[51];
char res[51];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < arr[0].size(); i++) {
		bool flag = true;
		for (int j = 0; j < n - 1; j++) {
			if (arr[j][i] != arr[j + 1][i]) {
				flag = false;
			}
		}
		if (flag) res[i] = arr[0][i];
		else res[i] = '?';
	}
	cout << res;
}