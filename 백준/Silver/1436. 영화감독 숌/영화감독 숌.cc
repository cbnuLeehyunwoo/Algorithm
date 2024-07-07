#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i = 0;
	int serise = 0;
	int count = 0;
	cin >> serise;
	while (true) {
		i++;
		string serise_S = to_string(i);				 // 666이 들어있는지 판별하기 위해 문자열로 변환
		if (serise_S.find("666") != string::npos) {  // npos를 반환하지 않으면 포함된 것으로 간주
			count++;
		}
		i = stoi(serise_S);							// ++을 하기 위해 다시 숫자로 변환
		if (count == serise) {
			cout << i;
			break;
		}
	}
	return 0;
}
