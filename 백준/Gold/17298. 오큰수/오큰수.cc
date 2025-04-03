#include <iostream>
#include <stack>
#include <vector>

using namespace std;
stack<int> s;
vector<int> v, res;

int main() {
    int n;
    cin >> n;
    v.resize(n);  
    res.resize(n); 

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && s.top() <= v[i])
            s.pop();

        if (s.empty()) res[i] = -1;
        else res[i] = s.top();

        s.push(v[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
}
