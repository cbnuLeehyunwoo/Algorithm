#include <iostream>
#include <string>
using namespace std;

int main() {
    int N = 0;
    string str;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> str;
        if (str.length() >= 1) {
            cout << str[0] << str[str.length() - 1] << "\n";
        } else {
            cout << "\n";
        }
    }
    return 0;
}
