#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int N = 0;
    cin >> N; 
    if(N % 2024 == 0 && N <= 100000) {
        cout << "Yes";
    }

    else {
        cout << "No";
    }
}