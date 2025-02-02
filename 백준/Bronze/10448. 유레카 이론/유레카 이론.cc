#include <iostream>

using namespace std;

int trinum[1001];
void istritri(int n)
{
	for (int i = 1; i < 45; i++) {
		for (int j = 1; j < 45; j++) {
			for (int k = 1; k < 45; k++) {
				if (trinum[i] + trinum[j] + trinum[k] == n) {
					cout << 1 << "\n";
					return;
				}
			}
		}
	}
	cout << 0 << "\n";
	return;
}

int main() {
	for (int i = 1; i < 45; i++) {
		trinum[i] = i * (i + 1) / 2;
	}
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int temp;
		cin >> temp;
		istritri(temp);
	}
}