#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int dice[4] = { 0, };  
	int prize = 0;
	int max = 0;
	cin >> dice[0] >> dice[1] >> dice[2];

	if ((dice[0] == dice[1]) && (dice[1] == dice[2])) {   // 주사위 세개의 눈이 모두 같을 경우
		prize = 10000 + dice[0] * 1000;
	}
	else if (dice[0] == dice[1]) {     // 주사위 두개의 눈이 같을 경우
		prize = 1000 + dice[0] * 100;
	}
	else if (dice[1] == dice[2]) {
		prize = 1000 + dice[1] * 100;
	}
	else if (dice[0] == dice[2]) {
		prize = 1000 + dice[0] * 100;
	}
	else {                      
		for (int i = 0; i < 3; i++) {     // 주사위의 최대값 저장
			if (max < dice[i]) {
				max = dice[i];
			}
		}                           
		prize = max * 100;   // 주사위 눈이 모두 다를경우
	}

	cout << prize;

	return 0;
}