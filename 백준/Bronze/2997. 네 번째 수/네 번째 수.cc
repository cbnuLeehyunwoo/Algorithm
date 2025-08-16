#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v(3);
int main() {
	cin >> v[0] >> v[1] >> v[2];
	sort(v.begin(), v.end());
	if (v[0] - v[1] == v[1] - v[2]) {
		cout << v[2] + (v[1] - v[0]);
	}
	else if (v[1] - v[0] > v[2] - v[1]) {
		cout << v[1] - (v[2] - v[1]);
	}
	else if (v[1] - v[0] < v[2] - v[1]) {
		cout << v[2] - (v[1] - v[0]);
	}
}