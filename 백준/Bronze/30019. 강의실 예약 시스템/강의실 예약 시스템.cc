#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    vector<int> end_time(N + 1, 0); // 각 강의실의 마지막 종료 시간 (초기값: 0)

    for (int i = 0; i < M; i++) {
        int k, s, e;
        cin >> k >> s >> e;

        // 현재 강의실 k의 마지막 종료 시간이 s보다 작으면 예약 가능
        if (end_time[k] <= s) {
            cout << "YES\n";
            end_time[k] = e; // 종료 시간 업데이트
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}
