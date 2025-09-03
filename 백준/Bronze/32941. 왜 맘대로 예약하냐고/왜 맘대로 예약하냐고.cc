#include <iostream>
using namespace std;

int T, X, N, K;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T >> X >> N;
    while (N--) {
        bool chk = 0;
        cin >> K;
        while (K--) {
            int x; cin >> x;
            if (x == X) chk = 1;
        }
        if (!chk) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}