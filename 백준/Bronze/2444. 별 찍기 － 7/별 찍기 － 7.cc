#include <iostream>

using namespace std;

int main() {
    int count;
    cin>>count;

    for (int i=0; i<count; i++) {
        for (int j=1;j<count-i;j++) {
            cout << " ";
        }
        for (int j=1;j<=2*(i+1)-1;j++) {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 1; i <= count; i++) {
        for (int j=1; j<=i;j++) {
            cout <<" ";
        }
        for (int j =1; j<2*(count-i);j++) {
            cout << "*";
        }
        cout <<"\n";
    }
    
}
