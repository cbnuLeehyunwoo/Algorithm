#include <iostream>
#include <string>

using namespace std;
bool flag = true;
int cnt = 0;
int main() {
    string str;
    cin >> str;
if(str[0] != 'S') cnt++;
if(str[1] != 'c') cnt++;
if(str[2] != 'i') cnt++;
if(str[3] != 'C') cnt++;
if(str[4] != 'o') cnt++;
if(str[5] != 'm') cnt++;
if(str[6] != 'L') cnt++;
if(str[7] != 'o') cnt++;
if(str[8] != 'v') cnt++;
if(str[9] != 'e') cnt++;

cout << cnt;    
}