#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
vector<int> vec;
int main() {
	int n = 0;
	int cnt = 0;
	int max = -1;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}

	if (n == 1) {
		cout << 0;
		return 0;
	}
	while (true) {
		max = *max_element(vec.begin(), vec.end());
		if (vec[0] == max) {
            for(int i = 1; i < vec.size(); i++) {
				if (vec[i] == max) {
					cout << cnt + 1;
					return 0;
				}
			}
			cout << cnt;
			break;
		}
		if (vec[0] != max) {
			int idx = distance(vec.begin(), max_element(vec.begin(), vec.end()));
			vec[idx]--;
			vec[0]++;
			cnt++;
		}
	}
}