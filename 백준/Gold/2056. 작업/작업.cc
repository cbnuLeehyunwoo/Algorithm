#include <iostream>                                                            
#include <vector>
#include <queue>
#include <algorithm>
#define SIZE 10001
using namespace std;

vector<int> adj[SIZE];
int indeg[SIZE];
int sigan[SIZE];
queue<int> q;
int result[SIZE];

int main() {
    int N;       // N: 정점 수
    cin >> N;     

    int T, M;
    for (int i = 1; i <= N; i++) {
        cin >> T >> M;     
        sigan[i] = T;
        for (int j = 0; j < M; j++) {
            int b;
            cin >> b;
            adj[b].push_back(i); // b의 인접리스트에 i 추가
            indeg[i]++; //i의 진입차수(indegree)증가
        }
    }

    for (int i = 1; i <= N; i++) { // 모든 정점들을 순회하며
        if (indeg[i] == 0) { // 진입차수(indegree)가 0인 놈들(의존성없는)에 대해
            q.push(i);       // 큐에 넣어놓음(이수했음)
        }
        result[i] = sigan[i]; // 의존성 없는 작업들 완료시간 표시
    }

    while (!q.empty()) {
        int cur = q.front();   
        q.pop();

        for (int i = 0; i < adj[cur].size(); i++) { 
            int next = adj[cur][i];  
            indeg[next]--; 
            result[next] = max(result[next], result[cur] + sigan[next]);
            if (indeg[next] == 0) {
                q.push(next);
                result[next] = max(result[next], result[cur] + sigan[next]);
            }
        }
    }

    cout << *max_element(result, result+N+1);

    return 0;
}
