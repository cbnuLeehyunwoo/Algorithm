// 브루트 포스로 해결
#include <iostream>
#include <climits>
#include <string>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int height[51];
	int weight[51];
	int rank[51] = { 0, };
	
	for (int i = 0; i < n; i++) {
		cin >> weight[i] >> height[i];
	}

	for (int i = 0; i < n; i++) {
		rank[i] = 1;
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (weight[i] > weight[j] && height[i] > height[j]) {
				rank[j]++;
			}
			else if (weight[i] < weight[j] && height[i] < height[j]) {
				rank[i]++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << rank[i] << " ";
	}
}