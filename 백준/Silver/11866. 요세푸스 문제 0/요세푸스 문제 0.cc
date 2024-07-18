#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int main() {
	int n = 0;
	int k = 0;

	queue<int> que;
	
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		que.push(i);
	}

	cout << "<";

	while (que.empty() == 0) {        // 큐 안에 원소가 있을때까지 반복.
		for (int i = 1; i < k; i++) {
			que.push(que.front());   // 1부터 k-1번째 원소까지 큐의 뒤로 보냄
			que.pop();				 // 보낸 원소를 삭제
		}
		cout << que.front();
		if (que.size() >= 2) {
			cout << ", ";
		}
		que.pop();
	}

	cout << ">";
	return 0;
}