#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string x;
    cin >> x; // 공백 없이 입력받은 문자열

    int a, b;

    // 입력 문자열의 길이에 따라 경우를 나눔
    if (x.size() == 2) {
        // 숫자가 1자리 + 1자리인 경우
        a = x[0] - '0';
        b = x[1] - '0';
    } else if (x.size() == 3) {
        // 숫자가 10이 포함된 경우 (1+2 자리 또는 2+1 자리)
        if (x[1] == '0') {
            a = 10;
            b = x[2] - '0';
        } else {
            a = x[0] - '0';
            b = 10;
        }
    } else if (x.size() == 4) {
        // 두 수가 모두 10인 경우
        a = 10;
        b = 10;
    }

    cout << a + b << '\n'; // 결과 출력
    return 0;
}