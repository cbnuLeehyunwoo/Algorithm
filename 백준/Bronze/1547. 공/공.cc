#include <iostream>

using namespace std;

int arr[3] = { 1, 2, 3 };
int ball[3] = { 1, 0, 0 };

int find(int n) {
	for (int i = 0; i < 3; i++) {
		if (arr[i] == n) {
			return i;
		}
	}
}


int main() {
	int m = 0;
	cin >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a = find(a);
		b = find(b);
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}

	cout << arr[0];
}