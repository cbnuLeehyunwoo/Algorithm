#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int N = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cout << i << "\n"; // endl;은 시간이 오래 걸려서 시간초과 발생
    }
    return 0;
}
