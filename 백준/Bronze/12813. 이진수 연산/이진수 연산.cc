#include <iostream>
#include <string>
#include <bitset>

#define SIZE 100000 

using namespace std;

int main(void) {
    string temp_a, temp_b;
    cin >> temp_a >> temp_b;

    bitset<SIZE> a(temp_a);
    bitset<SIZE> b(temp_b);

    bitset<SIZE> temp1 = a & b;  // AND 연산
    bitset<SIZE> temp2 = a | b;  // OR 연산
    bitset<SIZE> temp3 = a ^ b;  // XOR 연산
    bitset<SIZE> temp4 = ~a;     // NOT 연산
    bitset<SIZE> temp5 = ~b;     // NOT 연산

    cout << temp1.to_string() << "\n";
    cout << temp2.to_string() << "\n";
    cout << temp3.to_string() << "\n";
    cout << temp4.to_string() << "\n";
    cout << temp5.to_string() << "\n";

    return 0;
}
