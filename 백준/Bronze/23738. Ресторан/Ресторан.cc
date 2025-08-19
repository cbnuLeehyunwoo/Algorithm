#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;
    string res = "";
    for(char c : str) {
        if(c == 'B') res += "v";
        else if(c == 'E') res += "ye";
        else if(c == 'H') res += "n";
        else if(c == 'P') res += "r";
        else if(c == 'C') res += "s";
        else if(c == 'Y') res += "u";
        else if(c == 'X') res += "h";
        else res += c;
        
    }
    
    for(int i = 0; i < res.size(); i++) {
        if('A' <= res [i] && res[i] <= 'Z') {
            res[i] += 32;
        }
    }
    cout << res << "\n";
}