#include <iostream>

using namespace std;
bool flag[31];
int main() {
	for (int i = 1; i <= 28; i++) {
		int temp;
		cin >> temp;
		flag[temp] = true; 
	}

	for (int i = 1; i <= 30; i++) {
		if (!flag[i]) cout << i << "\n";
	}
}