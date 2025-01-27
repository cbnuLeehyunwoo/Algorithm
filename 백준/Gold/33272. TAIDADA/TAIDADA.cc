#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    long long N, M, K;
    cin >> N >> M >> K;

    // N개의 숫자를 골라야 하는데 M개의 숫자 중에서 충분히 고를 수 없는 경우
    if (M < N) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> result;
    unordered_set<int> used;

    for (int i = 1; i <= M && result.size() < N; i++) {
        if (used.find(i ^ K) == used.end()) { // XOR 조건 확인
            result.push_back(i);
            used.insert(i); // 사용된 수 저장
        }
    }

    // 조건을 만족하는 수열 생성 실패
    if (result.size() < N) {
        cout << -1 << endl;
        return 0;
    }

    // 결과 출력
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
