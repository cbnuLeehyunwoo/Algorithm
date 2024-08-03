#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int temp = 0;
    while (true) {
        getline(cin, str);
        if (str == "END") {
            return 0;
        }
        for (int i = 0; i < str.length() / 2; i++) {   // 문자열을 뒤집는 코드
            temp = str[i];
            str[i] = str[str.length() - i - 1];
            str[str.length() - i - 1] = temp;

        }
        cout << str << "\n";
    }
 	return 0;
}