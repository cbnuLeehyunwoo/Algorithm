#include <iostream>
using namespace std;

long long combination(int n, int r) {
    if (r > n - r) r = n - r;  // nCr에서 r > n-r이면 대칭성 이용
    long long result = 1;
    for (int i = 0; i < r; i++) {
        result = result * (n - i) / (i + 1);
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << combination(n, 5) << endl;
    return 0;
}
