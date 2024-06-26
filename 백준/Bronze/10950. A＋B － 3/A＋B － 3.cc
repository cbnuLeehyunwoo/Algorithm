#include <iostream>

using namespace std;

int main() 
{
	int repeat = 0;
	int A[100] = { 0, };
	int B[100] = { 0, };
	cin >> repeat;
	for (int i = 0; i < repeat; i++) {
		cin >> A[i] >> B[i];
	}

	for (int i = 0; i < repeat; i++) {
		cout << A[i] + B[i] << endl;
	}
}