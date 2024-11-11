#include <iostream>
#include <string>

using namespace std;
							 
int main() {
	unsigned long int n = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		string temp = to_string(i);
		int hap = 0;
		for (int j = 0; j < temp.size(); j++) {
			hap += temp[j] - '0';
		}
		if (hap + i == n) {
			cout << i;
			return 0;
		}
	}
	cout << 0;
	return 0;
}