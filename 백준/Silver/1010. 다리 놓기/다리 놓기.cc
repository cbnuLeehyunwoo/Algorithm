#include <iostream>

using namespace std;

long long combination(int n, int k);   // 오버플로우 방지를 위해 long long 으로 선언

int main() {
    int T = 0; // 테스트 케이스의 수
    int siteW = 0; // 서쪽에 있는 지점의 개수
    int siteE = 0; // 동쪽에 있는 지점의 개수

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> siteW >> siteE;

        // 조합 계산
        cout << combination(siteE, siteW) << "\n";
    }

    return 0;
}

long long combination(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;

    long long result = 1;
    k = min(k, n - k); 

    for (int i = 1; i <= k; i++) {
        result *= (n - i + 1);
        result /= i;
    }

    return result;
}
