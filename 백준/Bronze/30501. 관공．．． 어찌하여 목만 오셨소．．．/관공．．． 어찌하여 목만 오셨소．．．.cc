#include <iostream>
#include <string>
using namespace std;

int main() {
	int n = 0; 
	cin >> n;
	string res;
	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;

		for (int j = 0; j < temp.size(); j++) {
			if (temp[j] == 'S') {
				res = temp;
			}
		}
	}
	cout << res;
}