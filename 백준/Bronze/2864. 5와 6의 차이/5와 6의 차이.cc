#include <iostream>
#include <string>

using namespace std;

void get_min(string a, string b) {
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == '6') {
            a[i] = '5';
        }
    }
    
    for(int i = 0; i < b.size(); i++) {
        if(b[i] == '6') {
            b[i] = '5';
        }
    }
    cout << stoi(a) + stoi(b) << " ";
}

void get_max(string a, string b) {
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == '5') {
            a[i] = '6';
        }
    }
    
    for(int i = 0; i < b.size(); i++) {
        if(b[i] == '5') {
            b[i] = '6';
        }
    }
    cout << stoi(a) + stoi(b) << " ";
}

int main() {
    string a, b;
    cin >> a >> b;
    get_min(a, b);
    get_max(a, b);
}
