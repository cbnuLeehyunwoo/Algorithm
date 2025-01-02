#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    bool no_match = true;
    int result[6] = { 0, };
    int res_index = 0;
    regex pattern(".*FBI.*");  // 정규식 패턴
    // 5명의 요원 각각에 대하여
    for (int i = 0; i < 5; i++) {
        string name;
        cin >> name;
        if (regex_search(name, pattern)) {
            result[res_index] = i + 1;  // FBI가 발견되면 해당 인덱스를 출력
            res_index++;
            no_match = false;
        }
    }
    if (no_match) {
        cout << "HE GOT AWAY!" << endl;
        return 0;
    }
    for (int i = 0; i < res_index; i++) {
        cout << result[i] << " ";
    }
}
