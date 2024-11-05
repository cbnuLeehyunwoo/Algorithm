#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;
unordered_map<string, string> m;  // 그냥 맵을 선언해서 사용하면 시간초과가 발생하는 문제
								  // 해쉬 맵을 사용하여 문제를 해결해야함

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false); // cin , cout 시간 줄이기
	int N, M; // N: 저장된 사이트 주소의 수 , M: 찾으려는 사이트 주소의 수
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string temp1;
		string temp2;
		cin >> temp1 >> temp2;
		m[temp1] = temp2;  // insert보다 operator[]가 시간복잡도 면에서 우수함
	}

	for (int i = 0; i < M; i++) {
		string tofind;
		cin >> tofind;
		cout << m[tofind] << "\n"; // 해시맵을 사용했기때문에 키값을 입력하면 바로 접근이 가능
	}
}