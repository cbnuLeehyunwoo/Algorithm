#include <iostream>
#include <algorithm>
#define SIZE 51;
using namespace std;

int main() {
	int n;
	cin >> n;
	int score[51];
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		int gap = -1;
		for (int j = 0; j < k; j++) {
			cin >> score[j];
		}
		sort(score, score+k);
		for (int j = 0; j < k - 1; j++) {
			int candidate = score[j + 1] - score[j];
			if (candidate > gap) {
				gap = candidate;
			}
		}
		cout << "Class " << i + 1 << "\n";
		cout << "Max " << score[k-1] << ", Min "  << score[0] << ", Largest gap " << gap << "\n";
	}
}