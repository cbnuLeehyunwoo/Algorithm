#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	queue <int> q;
	int n;  // 카드의 장 수
	cin >> n; 

	for (int i = 1; i <= n; i++) {  // 큐에 1부터 N까지 삽입
		q.push(i);
	}
	
	while (q.size() != 1) { 
		q.pop();			// 맨 위의 카드를  맨 밑으로 넣고, 맨 위의 카드를 삭제
		q.push(q.front());
		q.pop();
	}

	cout << q.front();

	return 0;
}