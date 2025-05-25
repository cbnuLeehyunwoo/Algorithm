#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int V, E;
vector< vector<int> > adj;

void topological_sort(queue<int>& answer, vector<int>& indegree, vector<vector<int>>& adj) {
    while (answer.size() != V) {
        for (int i = 1; i < adj.size(); i++) {
            if (indegree[i] == 0) {
                indegree[i] = -1; 
                answer.push(i);        
                for (auto& v : adj[i]) {
                    indegree[v]--;
                }
            }
        }
    }
}

int main() {
    cin >> V >> E;
    vector< vector<int> > adj(V + 1, vector<int>());
    vector<int> indegree(V + 1, 0);
    queue<int> answer;
    while (E--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);        //adj에 인접리스트 담기
        indegree[v]++;              //indegree 업데이트
    }

    topological_sort(answer, indegree, adj);

    while (!answer.empty()) {
        cout << answer.front() << " ";
        answer.pop();
    }
    cout << '\n';
}
