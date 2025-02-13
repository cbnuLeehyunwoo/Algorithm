#include <iostream>
#include <string>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	string amho;
	cin >> amho;
	for (int i = 0; i < amho.size(); i++) {
		if (i % n == 0) {
			cout << amho[i];
		}
	}
}