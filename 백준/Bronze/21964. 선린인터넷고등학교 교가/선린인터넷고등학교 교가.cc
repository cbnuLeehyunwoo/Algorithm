#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	int N = 0;
	cin >> N;
	string str;
	cin >> str;
	for (int i = N - 5; i < N; i++) {
		cout << str[i];
	}
}