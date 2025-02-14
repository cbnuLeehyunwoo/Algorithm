#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector <int> v;
int main() {
	int n = 0;
	int max = -1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		int temp_max = (n - i) * v[i];
		if (temp_max > max) {
			max = temp_max;
		}
	}
	cout << max;
}