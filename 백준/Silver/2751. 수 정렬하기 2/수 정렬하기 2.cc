#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int N;
	cin >> N; //입력받을 숫자의 개수;

	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		cout << arr[i] << "\n";
	}

	delete[]arr;

	return 0;


}