#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {

    string input;
    cin >> input;
    // 정규 표현식 사용
    regex pattern(R"((\d{1,2})/(\d{1,2})/(\d{1,2}))");
    smatch match;

    int K, D, A;
    if (regex_match(input, match, pattern)) {
        K = stoi(match[1].str());
        D = stoi(match[2].str());
        A = stoi(match[3].str());
    }

    if (K + A < D || D == 0) {
        cout << "hasu";
    }
    else
        cout << "gosu";
}