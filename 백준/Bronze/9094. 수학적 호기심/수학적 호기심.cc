#include <iostream>
using namespace std;

void calc(int n, int m) {
    int cnt = 0;
    for (int a = 1; a < n; a++) {
        for (int b = a + 1; b < n; b++) {  // b는 항상 a보다 크다
            if ((a * a + b * b + m) % (a * b) == 0) {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        calc(n, m);
    }
    return 0;
}
