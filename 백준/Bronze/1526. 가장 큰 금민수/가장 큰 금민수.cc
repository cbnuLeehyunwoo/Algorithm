#include <iostream>
#include <string>
using namespace std;

int main() {
	int N = 0;
	int max = 0;
	cin >> N;
	bool flag = true;
	for (int i = 4; i <= N; i++) {
		string temp = to_string(i);
		for (int j = 0; j < temp.size(); j++) {
			if (temp[j] == '4' || temp[j] == '7') {
				flag *= true;
			}
			else {
				flag *= false;
				continue;
			}		
		}
		if (flag == true) {
			max = i;
		}
		flag = true;
	}
	cout << max;
}