// map은 문자열을 인덱스로 가질 수 있고 입력된 값을 자동으로
// 사전순으로 정렬하므로 해당 문제에 적절하다. 
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	int N = 0;   // 듣도못한 사람의 수
	int M = 0;   // 보도못헌 사람의 수
	int count = 0;
	string str;
	map<string, int> m;
	map<string, int>::iterator iter;  // map을 순회하는데 필요한 이터레이터 정의

	cin >> N >> M; 

	for (int i = 0; i < N + M; i++) {  // 입력값을 키로 하고, 등장횟수를 값으로 하여 값이 2이상이되면 중복으로 판정
		cin >> str;
		m[str]++;
		if (m[str] == 2) {
			count++;
		}
	}
	cout << count << "\n";

	for (iter = m.begin(); iter != m.end(); iter++) {   //map의 첫 번째 요소부터 마지막 요소까지
		if (iter->second == 2)   // iter-> second : int(값)
			cout << iter->first << "\n";  // iter-> first : string(키) 
	}

}