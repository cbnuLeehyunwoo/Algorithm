#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str, bomb;
    cin >> str;
    cin >> bomb;

    int bomb_len = bomb.size();
    int str_len = str.size();
    string res = "";

    for (int i = 0; i < str_len; i++) {
        res += str[i];

        if (res.size() < bomb_len) continue;
        if (res.substr(res.size() - bomb_len, bomb_len) == bomb) { // 폭탄 문자열의 길이만큼 최우측 비교
            res.resize(res.size() - bomb_len);
        }
    }

    if (res.empty()) {
        cout << "FRULA";
    }
    else {
        cout << res;
    }

    return 0;
}
