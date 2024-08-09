#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;
string WB[8] = {       // 최종적으로 완성하고자 하는 체스판, (W로 시작)
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};
string BW[8] = {        // 최종적으로 완성하고자 하는 체스판, (B로 시작)
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};
string board[50];
int WB_cnt(int x, int y)        //  W로 시작하는 체스판과 잘라낸 체스판을 비교하는 함수, 재색칠해야하는 횟수를 리턴한다.
{                             
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[x + i][y + j] != WB[i][j])
                cnt++;
        }

    }
    return cnt;
}
int BW_cnt(int x, int y)         //  B로 시작하는 체스판과 잘라낸 체스판을 비교하는 함수, 재색칠해야하는 횟수를 리턴한다.
{
    int cnt = 0; 
    for (int i = 0; i < 8; i++) 
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[x + i][y + j] != BW[i][j])
                cnt++;
        }

    }
    return cnt;
}
int main() {
    int size[2];
    int cnt;
    int min_val = 12345;
    pair<int, int> p1;
    cin >> p1.first >> p1.second;
    for (int i = 0; i < p1.first; i++)
        cin >> board[i];
    for (int i = 0; i + 8 <= p1.first; i++)
    {
        for (int j = 0; j + 8 <= p1.second; j++)
        {
            int tmp;
            tmp = min(WB_cnt(i, j), BW_cnt(i, j));   // B로 시작하는것부터 자르던 W로 시작하는 것부터 자른다는 것이  WB, BW와 비교해야한다는 뜻은 아니다, 
                                                     //그러므로 두 함수에 모두 대입하여 최솟값을 수용한다.
            if (tmp < min_val) {
                min_val = tmp;
            }
        }
    }
    cout << min_val;
    return 0;
}