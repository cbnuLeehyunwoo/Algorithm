#include <iostream>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = n - i; j > 1; j--) {
            cout << " ";
        }
        int k = 0;
        while(k < 2*i + 1) {
            if(k % 2 == 1){
                cout << " ";
            }
            else 
                cout << "*";
            k++;
        }
        cout << "\n";
    }
}