#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	vector<int> vec = { arr[0], arr[1], arr[2] };
	sort(vec.begin(), vec.end());
	for (const int& num : vec) {
		std::cout << num << " ";
	}
}