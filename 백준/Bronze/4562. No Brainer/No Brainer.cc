#include <iostream>

using namespace std;
int main() {
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if(b > a) {
            cout << "NO BRAINS" << "\n";
        }
        else {
            cout << "MMM BRAINS" << "\n";
        }
    }
}