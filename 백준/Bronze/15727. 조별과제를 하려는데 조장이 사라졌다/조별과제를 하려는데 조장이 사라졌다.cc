#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <cmath>
using namespace std;

int main() {
    int L = 0; // 성우의 현재 위치와 민건이의 집까지의 거리
    int time = 0;
    cin >> L;
    time = ceil(static_cast<float>(L) / 5);
    cout << time;

    return 0;
}