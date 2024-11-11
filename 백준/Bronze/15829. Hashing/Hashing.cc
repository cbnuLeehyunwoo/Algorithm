#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
	int L;
	unsigned long long r = 1;
	unsigned long long sum = 0;
	char arr[51];
	cin >> L;
	cin >> arr;
	for (int i = 0; i < L; i++) {
		sum = sum + (((arr[i] - 'a' + 1) * r) % 1234567891);
		r = r * 31;
		r = r % 1234567891;
	}
	cout << sum % 1234567891;
	return 0;
}