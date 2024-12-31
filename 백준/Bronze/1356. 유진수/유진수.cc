// 브루트 포스 알고리즘으로 해결
#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
	cin >> N;
	string str = to_string(N);

	for (int i = 1; i < str.size(); i++) {
		int res1 = 1;
		int res2 = 1;
		for (int j = 0; j < i; j++) {
			res1 = res1 * (str[j] - '0');
		}
		for (int k = i; k < str.size(); k++) {
			res2 = res2 * (str[k] - '0');
		}
		if (res1 == res2) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}