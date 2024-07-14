#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int room;
    cin >> room;

    if (room == 1) {
        // 방 번호가 1인 경우는 1층에 위치합니다.
        cout << 1;
        return 0;
    }

    int floor = 1; // 1층부터 시작
    int range = 1; // 1번 방 포함 범위

    while (range < room) {
        range += 6 * floor; // 각 층마다 6개씩 방이 증가
        floor++;
    }

    cout << floor;

    return 0;
}
