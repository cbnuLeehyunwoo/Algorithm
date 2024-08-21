#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {    
	string name;
	int weight = 0; // 몸무게(kg)
	int age = 0;  

	while (true) {
		cin >> name >> age >> weight;
		if (name == "#" && age == 0 && weight == 0) {  // 입력이 # 0 0 이면 프로그램을 종료
			return 0;
		}

		if (age > 17 || weight >= 80) {           // 17세 이상이거나 몸무게가 80 이상이면 Senior 출력 아니면 Junior 출력
			cout << name << " Senior" << "\n";
		}
		else {
			cout << name << " Junior" << "\n";
		}
	}
	return 0;
}
