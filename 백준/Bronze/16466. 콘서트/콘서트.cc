#include <iostream>
#include <set>
#define SIZE 1000001
using namespace std;
set <int> s;
bool ticket[SIZE] = { 1, };


int main() {
	int n = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int temp;
		cin >> temp;
		s.insert(temp);
	}


	for (int i = 1; i <= n + 1; i++) {
		if (s.find(i) == s.end()) {
			cout << i;
			return 0;
		}
	}
}