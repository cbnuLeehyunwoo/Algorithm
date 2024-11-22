#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int arr[11][11];

int main() {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;
		reverse(temp.begin(), temp.end());
		for (int j = 0; j < M; j++) {
			arr[i][j] = temp[j] - '0';
		}
	  }
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}
}
