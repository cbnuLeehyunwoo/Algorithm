#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int N;
    long long M, K;
    cin >> N >> M >> K;

    // M개의 숫자 중에서 N개를 고를 수 없는 경우
    if (M < N) {
        cout << -1 << endl;
        return 0;
    }

    unordered_set<int> used; // 해시셋 사용 (순서 보장 X)

    for (int i = 1; i <= M && used.size() < N; i++) {
        if (used.find(i ^ K) == used.end()) { // XOR 조건 검사
            used.insert(i); // 숫자 추가
        }
    }

    // 조건을 만족하는 수열을 생성하지 못한 경우
    if (used.size() < N) {
        cout << -1 << endl;
    } else {
        for (int num : used) {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}
