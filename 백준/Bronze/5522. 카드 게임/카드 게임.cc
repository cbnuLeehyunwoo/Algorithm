#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int question[6] = { 0, };
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> question[i];
		sum += question[i];
	}
	cout << sum;


	return 0;
}