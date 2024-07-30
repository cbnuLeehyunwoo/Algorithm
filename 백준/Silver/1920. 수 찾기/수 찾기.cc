#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); //시간 단축을 위해 cin, cout의 동작에 독립적인 버퍼를 갖게함.
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, num;
	cin >> n; // 리스트의 원소의 개수

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i]; // 리스트의 원소를 입력받는다.
	}
	sort(v.begin(), v.end()); // 이진탐색을 위해 정렬한다. 

	cin >> m; // 비교할 숫자들의 개수
	for (int i = 0; i < m; i++) {
		cin >> num;
		if (binary_search(v.begin(), v.end(), num)) {
			cout << "1\n";    // 결과가 참이면 1출력(존재한다.)
		}
		else
			cout << "0\n"; // 존재하지 않는다
	}

	return 0;
  }