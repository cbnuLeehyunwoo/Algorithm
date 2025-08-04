#include <iostream>
#include <limits>
using namespace std;
int mn;
int mx;
int main() {
    int n = 0;
    cin >> n;
    int first = 0;
    cin >> first;
    mn = first;
    mx = first;
    for(int i = 1; i < n; i++) {
       int temp;
        cin >> temp;
        if(mn > temp) mn = temp;
        if(mx < temp) mx = temp;
    }
    if(mn == first) cout << "ez";
    else if(mx == first) cout << "hard";
    else cout << "?";
}