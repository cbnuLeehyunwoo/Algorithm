#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N; // 온라인 저지 회원의 수
    cin >> N;

    vector<pair<int, string>> members(N);

    for (int i = 0; i < N; i++) {
        cin >> members[i].first >> members[i].second;
    }

    stable_sort(members.begin(), members.end(), [](const pair<int, string>& a, const pair<int, string>& b) { // stable_sort와 sort 함수의 차이
        return a.first < b.first;                                                                            // 동일한 값들 사이의 상대적인 순서를 유지하는 추가적인 작업 수행   
        });

    for (const auto& member : members) {
        cout << member.first << " " << member.second << endl;
    }

    return 0;
}
