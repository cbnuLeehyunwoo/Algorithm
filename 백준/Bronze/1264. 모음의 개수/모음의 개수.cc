#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

int main() {

    string sentence;
    string aeiou = "aeiouAEIOU"; // 모음이 있는지 비교하기 위해
    while (true) {
        int cnt = 0; // 모음의 개수를 저장
        getline(cin, sentence);
        if (sentence == "#") {  // #을 입력받으면 프로그램 종료
            return 0;
        }
        for (int i = 0; i < sentence.length(); i++) {
            if (aeiou.find(sentence[i]) != string::npos) {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}