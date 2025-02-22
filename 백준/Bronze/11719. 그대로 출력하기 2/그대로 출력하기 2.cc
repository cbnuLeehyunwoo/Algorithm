#include <iostream>
using namespace std;
string str [101];
int cnt = 0;
int end_idx = 0;
int main() {
	while(cnt != 100)
	{
		string temp;
		getline(cin, temp);
		if(temp != "") {
			end_idx = cnt;
		}
		str[cnt] = temp;
		cnt++;
			
	}
	for(int i = 0; i <= end_idx; i++) {
		cout << str[i] << "\n";
	}
}