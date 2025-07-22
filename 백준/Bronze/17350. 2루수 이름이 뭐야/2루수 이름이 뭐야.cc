#include <iostream>
#include <string>
using namespace std;


bool flag = false;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if(str == "anj") flag = true;
    }
    if(flag) cout << "뭐야;";
    else cout << "뭐야?";
}