#include <iostream>
#include <string>
using namespace std;

int main() {
    int N = 0;
    int L = 0;
    cin >> N >> L;
    int i = 1;
    int count = 0;
    
    while (count < N) {
        string temp = to_string(i);
        bool containsL = false;
        
        // 'i'가 L을 포함하는지 확인
        for (int j = 0; j < temp.size(); j++) {
            if (int(temp[j] - '0') == L) {
                containsL = true;
                break;
            }
        }

        // L을 포함하지 않으면 count 증가
        if (!containsL) {
            count++;
        }
        
        // i는 무조건 증가
        i++;
    }

    cout << i - 1 << endl;  // 마지막으로 증가한 i가 N번째 숫자임
}
