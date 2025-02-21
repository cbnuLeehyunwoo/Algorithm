#include <iostream>

using namespace std;
int main() {
    int cnt_1 = 0;
    int cnt_2 = 0;
    for(int i = 0; i < 3; i++) {
        int temp;
        cin >> temp;
        if(temp == 1) {
            cnt_1++;
        }
        else
            cnt_2++;
    }
    if(cnt_1 > cnt_2) {
        cout << 1;
    }
    else
        cout << 2;
}