#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

string to_Lower(string str) {                    // 문자열의 대문자를 소문자로 바꿔주는 함수, 대문자라고 판별하면 32를 더한다. 
    for (int i = 0; i < str.size(); i++) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    return str;
}

int main() {
    int N = 0;
    cin >> N;
    string customer_N[101];
    for (int i = 0; i < N; i++) {
        cin >> customer_N[i];
        customer_N[i] = to_Lower(customer_N[i]);
    }

    for (int i = 0; i < N; i++) {
        cout << customer_N[i] << "\n";
    }
    return 0;
}