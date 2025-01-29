#include <iostream>
#include <string>
using namespace std;

int main() {
    unsigned int n = 0;
    cin >> n;
    string str = "WelcomeToSMUPC"; // 올바른 문자열을 지정
    int idx = (n - 1) % 14; // 0부터 시작하는 인덱스이므로, n-1을 사용

    cout << str[idx]; // 해당 인덱스의 문자 출력
    return 0;
}
