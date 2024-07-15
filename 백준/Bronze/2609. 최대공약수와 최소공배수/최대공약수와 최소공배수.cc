#include <iostream>
using namespace std;
int getLCM(int a, int b, int gcd) { // 최소공배수를 구하는 함수
    return (a * b) / gcd;
}
int getGCD(int a, int b) {    // 최대공약수를 구하는 함수
    int remain = a % b; 
    if (remain == 0) {
        return b;
    }
    else {
        return getGCD(b, remain);  // 나머지가 0이 될때까지 반복(유클리드 호제법)
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int GCD = 0; // 최대공약수
    int LCM = 0; // 최소공배수
    int A, B;
    cin >> A >> B;
    GCD = getGCD(A, B);
    LCM = getLCM(A, B, GCD);

    cout << GCD << "\n" << LCM; 
    return 0;
}
