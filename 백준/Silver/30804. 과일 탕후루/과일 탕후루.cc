#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;  
    cin >> N;
    int fruit[N];  

    for (int i = 0; i < N; i++) {
        cin >> fruit[i];
    }

    map<int, int> cnt;  // 과일 개수를 저장하는 map
    int left = 0, right = 0, maxLen = 0;

    while (right < N) {
        cnt[fruit[right]]++;  // 과일 추가
        while (cnt.size() > 2) {  // 과일 종류가 3개 이상이면
            cnt[fruit[left]]--;  // left가 가리키는 과일 제거
            if (cnt[fruit[left]] == 0) {
                cnt.erase(fruit[left]);  // 개수가 0이면 map에서 삭제
            }
            left++;  // 윈도우 왼쪽 이동
        }
        maxLen = max(maxLen, right - left + 1);  // 최대 길이 갱신
        right++;  // 윈도우 오른쪽 확장
    }

    cout << maxLen;
}
