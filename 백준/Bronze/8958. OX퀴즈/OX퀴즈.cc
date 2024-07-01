#include <iostream>
#include <string>

using namespace std;

int main()
{
    int testcase = 0;
    cin >> testcase;

    for (int k = 0; k < testcase; k++) {
        string OXresult;
        cin >> OXresult;

        int combo = 0;
        int score = 0;

        for (char i : OXresult) {
            if (i == 'O') {
                combo++;
                score += combo; // 연속으로 맞은 문제의 개수에 따라 점수 추가
            }
            else if (i == 'X') {
                combo = 0; // 틀린 문제 검출 시 추가 점수 초기화
            }
        }

        cout << score << "\n";
    }

    return 0;
}
