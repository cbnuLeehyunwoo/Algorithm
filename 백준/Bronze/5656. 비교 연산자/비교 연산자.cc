
#include <iostream>
#include <string>
#include <cmath>
 
using namespace std;
 
int main() {
 
    int a,b;
    string str;
    int j=1;
 
    while(true){
    cin>>a>>str>>b;
    if(str=="E"){
        break;
    }
 
    
    for(int i=0; i<str.length(); i++){
        if(str[i+1]=='='){
            if(str[i]=='>'){
                if(a>=b){
                    cout<<"Case "<<j<<": true\n";
                }
                else{
                    cout<<"Case "<<j<<": false\n";
                }
            }
            else if(str[i]=='<'){
                if(a<=b){
                    cout<<"Case "<<j<<": true\n";
                }
                else{
                    cout<<"Case "<<j<<": false\n";
                }
            }
            else if(str[i]=='='){
                if(a==b){
                    cout<<"Case "<<j<<": true\n";
                }
                else{
                    cout<<"Case "<<j<<": false\n";
                }
            }
            else if(str[i]=='!'){
                if(a!=b){
                    cout<<"Case "<<j<<": true\n";
                }
                else{
                    cout<<"Case "<<j<<": false\n";
                }
            }
        }
        else if(str[i]=='>'){
            if(a>b){
                cout<<"Case "<<j<<": true\n";
            }
            else{
                cout<<"Case "<<j<<": false\n";
            }
        }
        else if(str[i]=='<'){
            if(a<b){
                cout<<"Case "<<j<<": true\n";
            }
            else{
                cout<<"Case "<<j<<": false\n";
            }
        }
    }
    j++;
    }
    return 0;
}