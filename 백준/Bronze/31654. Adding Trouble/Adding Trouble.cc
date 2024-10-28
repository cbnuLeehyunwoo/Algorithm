#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
	long long int a = 0;
	long long int b = 0;
	long long int result = 0;
	cin >> a >> b >> result;

	if ((a + b) == result) {
		cout << "correct!";
	}
	else {
		cout << "wrong!";
	}


}