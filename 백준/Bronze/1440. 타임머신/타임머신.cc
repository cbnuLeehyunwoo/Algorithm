#include <iostream>
#include <climits>
#include <string>
using namespace std;

int main() {
	char str[50];
	cin >> str;
	
	int i = 0;
	int result = 0;
	int arr[3] = { 0, };
		if (str[i] != ':') {
			arr[0] = (str[i] - '0') * 10 + (str[i + 1] - '0');
			i += 3;
		}
		if (str[i] != ':') {
			arr[1] = (str[i] - '0') * 10 + (str[i + 1] - '0');
			i += 3;
		}
		if (str[i] != ':') {
			arr[2] = (str[i] - '0') * 10 + (str[i + 1] - '0');
			i += 2;
		}
		int Hcount = 0;
		
		for (int i = 0; i < 3; i++) {
			if (arr[i] > 59) {
				Hcount = 0;
				break;
			}
			if (arr[i] > 0 && arr[i] <= 12) {
				Hcount++;
			}
		}
		cout << Hcount*2 ;
		
}