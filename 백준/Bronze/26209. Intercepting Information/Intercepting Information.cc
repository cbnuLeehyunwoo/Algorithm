#include <iostream>
using namespace std;

int main() {
    bool flag = true;
    for(int i =0; i < 8; i++) {
        int temp;
        cin >> temp;
        if(temp == 9) {
            flag = false;
        }
    }
    if(flag) {
        cout << "S";
    }
    else 
        cout << "F";
}