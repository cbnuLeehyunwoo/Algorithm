#include <iostream>
#include <string>
using namespace std;


int main() {
	
	while (true) {
		string N;
		string end = "0";
		cin >> N;
		if (N == end) {
			return 0;
		}
		int len = 0;
		for (int i = 0; i < N.size(); i++) {
			if (N[i] == '1') {
				len += 2;
			}
			else if (N[i] == '0') {
				len += 4;
			}
			else {
				len += 3;
			}
		}
		len += N.size() + 1;
		cout << len << "\n";
	}
}