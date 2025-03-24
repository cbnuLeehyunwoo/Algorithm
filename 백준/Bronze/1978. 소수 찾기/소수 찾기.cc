#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, num, prime_N = 0;
    cin >> N;

    while (N--) {
        cin >> num;
        bool isPrime = (num > 1);

        for (int j = 2; isPrime && j * j <= num; j++) {
            if (num % j == 0) isPrime = false;
        }

        if (isPrime) prime_N++;
    }

    cout << prime_N;
    return 0;
}
