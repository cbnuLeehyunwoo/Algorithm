#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
#include <math.h>

using namespace std;
							 
int main() {
	int n = 0;
	string str;
	cin >> n;
	cin >> str;
	unsigned long int hash = 0;
	for (int i = 0; i < n; i++) {
		hash += (int(str[i]) - 96) * pow(31, i);
	}
	cout << hash;
}