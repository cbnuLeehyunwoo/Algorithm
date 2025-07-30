#include <iostream>
#include <vector>
#include <algorithm>
using ull = unsigned long long;
using namespace std;

vector<ull> v;

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	ull low = 0;
	ull high = *max_element(v.begin(), v.end());
	ull result = 0;

	while (low <= high) {
		ull mid = (low + high) / 2;
		ull sum = 0;

		for (int i = 0; i < n; i++) {
			if (v[i] > mid)
				sum += v[i] - mid;
		}

		if (sum >= m) {
			result = mid;
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}

	cout << result << endl;
}
