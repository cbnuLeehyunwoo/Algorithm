#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int N = 0; // 숫자를 입력받을 횟수
    cin >> N;
    cin.ignore();
    string input;
    int sum = 0;
    getline(cin, input);

    for (char c : input) {
        if (isdigit(c)) {
            sum += c - '0';    //0의 아스키 코드값을 빼면 숫자가 나옴 5 - 0 == '53'-'48' 
        }
    }

    cout << sum << std::endl;

    return 0;
}
