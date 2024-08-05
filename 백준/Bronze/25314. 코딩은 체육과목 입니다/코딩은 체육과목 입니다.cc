#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    float N = 0;
    cin >> N;

    for (int i = 0; i < ceil(N / 4); i++) {
        cout << "long ";
    }
    cout << "int";
 	return 0;
}