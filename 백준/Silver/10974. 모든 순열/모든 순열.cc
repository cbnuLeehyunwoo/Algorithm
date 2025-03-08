#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        arr.push_back(i);
    }

    do {
        for (int num : arr) cout << num << " ";
        cout << "\n";
    } while (next_permutation(arr.begin(), arr.end()));

    return 0;
}