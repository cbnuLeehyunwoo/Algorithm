#include <iostream>

using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        sum += temp;
    }
    if(sum == 0) cout << "Stay";
    else if(sum > 0) cout << "Right";
    else cout << "Left";

}