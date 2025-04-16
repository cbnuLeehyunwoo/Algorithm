#include <iostream>
#include <set>

using namespace std;

int main() {
	int t;
	cin >> t; // 테스트 케이스 개수 입력

	for (int test = 0; test < t; test++) {
		int n, m;
		cin >> n >> m;

		multiset<unsigned int> v1;
		multiset<unsigned int> v2;

		// 첫 번째 집합 입력
		for (int i = 0; i < n; i++) {
			unsigned int temp;
			cin >> temp;
			v1.insert(temp);
		}

		// 두 번째 집합 입력
		for (int i = 0; i < m; i++) {
			unsigned int temp;
			cin >> temp;
			v2.insert(temp);
		}

		// 둘 다 비지 않았을 때만 비교 반복
		while (!v1.empty() && !v2.empty()) {
			auto min1 = v1.begin(); // v1의 최대값
			auto min2 = v2.begin(); // v2의 최대값

			if (*min1 > *min2) {
				v2.erase(min2); // v1이 이기면 v2에서 제거
			}
			else if (*min1 < *min2) {
				v1.erase(min1); // v2가 이기면 v1에서 제거
			}
			else {
				v2.erase(min2);
			}
		}

		// 결과 출력
		if (v1.empty() && v2.empty()) {
			cout << "C"; // 무승부
		}
		else if (v1.empty()) {
			cout << "B"; // v2 승
		}
		else {
			cout << "S"; // v1 승
		}
		cout << "\n";
	}
}
