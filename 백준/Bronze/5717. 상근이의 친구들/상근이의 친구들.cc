#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int BF = 0;
    int GF = 0;

    while (true) {
        cin >> BF >> GF;
        if (BF == 0 && GF == 0) {
            return 0;
        }
        cout << BF + GF << "\n";
    }
 	return 0;
}