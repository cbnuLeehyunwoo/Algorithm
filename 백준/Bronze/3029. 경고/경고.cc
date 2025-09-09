#include <iostream>
#include <string>

using namespace std;

int hms1[3];
int hms2[3];

int main(){
  string t1, t2;
  cin >> t1 >> t2;

  for(int i=0; i<3; i++){
    hms1[i] = stoi(t1.substr(3*i,2));
    hms2[i] = stoi(t2.substr(3*i,2));
  }
  if(hms2[2]-hms1[2]<0){
    hms2[2]+=60;
    hms1[1]+=1;
  }
  if(hms2[1]-hms1[1]<0){
    hms2[1]+=60;
    hms1[0]+=1;
  }
  if(hms2[0]-hms1[0]<0||t1==t2){
    hms2[0]+=24;
  }

  for(int i=0; i<3; i++){
    int result = hms2[i]-hms1[i];
    if(result/10==0) cout << 0;
    cout << result;
    if(i!=2) cout << ':';
  }
  return 0;
}