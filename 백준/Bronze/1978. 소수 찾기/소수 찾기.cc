#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N = 0;
	int prime_N = 0;
	cin >> N;
	int N_arr[100] = { 0, };

	for (int i = 0; i < N; i++) {
		cin >> N_arr[i];
		bool isPrime = true;

		if (N_arr[i] <= 1) {
			isPrime = false;
		}
		else {
			for (int j = 2; j * j <= N_arr[i]; j++) {    // 각각의 수의 제곱근 까지만 나누어 떨어지는지 확인해도 문제없다. 
				if (N_arr[i] % j == 0) {
					isPrime = false;
					break;
				}
			}
		}

		if (isPrime) {
			prime_N++;
		}
	}

	cout << prime_N;
	return 0;
}
