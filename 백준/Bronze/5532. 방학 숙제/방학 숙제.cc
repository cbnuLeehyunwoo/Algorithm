#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    float L, A, B, C, D;
    cin >> L;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    if (A / C > B / D) {
        cout << L - ceil(A / C); 
    }
    else
        cout << L - ceil(B / D);
 	return 0;
}