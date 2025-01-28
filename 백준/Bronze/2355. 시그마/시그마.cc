#include <iostream>
using namespace std;

int main() {
    long long int a, b;
    cin >> a >> b;

    if (a < b) {
        cout << b * (b + 1) / 2 - a * (a - 1) / 2;
    }
    else
        cout << a * (a + 1) / 2 - b * (b - 1) / 2;
    
    return 0;
}
