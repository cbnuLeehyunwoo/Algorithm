#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N = 0;
    int index = 0;
    cin >> N;
    for (int i = N; i > 0; i--) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * index + 1; k++) {
            cout << "*";
        }
        index++;
        cout << "\n";
    }
 	return 0;
}