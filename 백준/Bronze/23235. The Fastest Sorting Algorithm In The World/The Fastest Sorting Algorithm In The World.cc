#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int i = 1;
    while (true) {
        getline(cin, s);
        if (s == "0") break;
        cout << "Case " << i << ": Sorting... done!\n";
        i++;
    }
}
