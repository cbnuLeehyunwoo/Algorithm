#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

int input[500002];
int first = 0;  // 처음에 입력받을 숫자카드의 개수
int second = 0; // 두번째로 입력받을 숫자카드의 개수
int card = 0;   // 입력받은 수를 잠시 저장

int main() {

    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
   
    cin >> first;

    for (int i = 0; i < first; i++) {
        cin >> card;
        input[i] = card;
    }
    sort(input, input + first); // 오름차순 정렬

    cin >> second;
    for (int i = 0; i < second; i++) {
        cin >> card;             
        cout << upper_bound(input, input + first, card) - lower_bound(input, input + first, card) << " "; 
        // 정렬한 값을 이분탐색, 찾고자하는 값의 마지막위치 - 처음 위치를 해주면 찾고자 하는 값의 등장회수가 나온다 
    }

    return 0;
}