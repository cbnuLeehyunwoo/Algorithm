#include <iostream>
using namespace std;

int main() {
    int h, m, time;
    cin >> h >> m >> time;
    if(m + time > 59) {
        h += (m + time)/60;
        if(((m+time)%60)==0)m = 0;
        else m = (m + time)%60;
        
    }  else m += time;
    if(h>23) h -= 24;
    cout << h << ' ' << m;
    return 0;
}