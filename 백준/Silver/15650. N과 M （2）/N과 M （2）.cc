#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, r;
    cin >> n >> r;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = i + 1;
    }
    vector<int> temp(n, 1);
    for (int i = 0; i < r; i++) {
        temp[i] = 0;
    }
    do {
        for (int i = 0; i < n; i++) {
            if (temp[i] == 0) {
                cout << v[i] << ' '; 
            }
        }
        cout << "\n";
    } while (next_permutation(temp.begin(), temp.end()));
}
