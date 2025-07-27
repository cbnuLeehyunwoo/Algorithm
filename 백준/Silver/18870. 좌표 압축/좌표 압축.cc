#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> v;
vector<int> before;
unordered_map<int, int> m;


int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		before.push_back(temp);
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	int cnt = 0;
	for (int x : v) {
		m.insert({ x, cnt });
		cnt++;
	}
	
	for (int x : before) {
		cout << m[x] << " ";
	}
}