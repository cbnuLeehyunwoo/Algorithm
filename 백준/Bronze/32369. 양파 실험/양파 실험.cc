#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    int o1 = 1; int o2 = 1;
    int binan = 1;
    cin >> n >> a >> b;
    for(int i = 0; i < n; i++) {
        if(binan == 1) {
            o1 += b;
            o2 += a;

            if(o1 == o2) o1--;
            else if(o1 > o2) binan = 2;
        }
        else if(binan == 2) {
            o1 += a;
            o2 += b;

            if(o2 == o1) o2--;
            else if(o2 > o1) binan = 1;
        }
    }
    if(binan == 1) cout << o2 << " " << o1;
    else cout << o1 << " " << o2;
    
}