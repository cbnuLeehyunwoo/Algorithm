#include <iostream> 
#include <string>
#include <vector>

using namespace std;

int main()
{
	int N = 0;  // 수열 A의 정수의 개수
	int X = 0;  // 정수 X , 수열 A에서 정수 X보다 작은 수를 모두 출력하는 프로그램
	cin >> N >> X;
	int* array = new int[N];
	vector<int> resarray;
	for (int i = 0; i < N; i++) {
		cin >> array[i];
		if (array[i] < X) {                    // X보다 작은 정수를 resarray벡터에 저장
			resarray.push_back(array[i]);
		}
	}

	for (int j : resarray) {
		cout << j << " ";
	}
	delete[] array;

	return 0;
}