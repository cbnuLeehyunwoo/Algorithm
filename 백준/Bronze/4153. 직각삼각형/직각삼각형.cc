#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	while (true) {
		int side[3] = { 0 , };
		cin >> side[0] >> side[1] >> side[2];
		for (int i = 0; i < 2; i++) {            // 버블소트, 큰값을 앞으로
			for (int j = 0; j < 2 - i; j++) {
				if (side[j] < side[j + 1]) {
					int temp = side[j];
					side[j] = side[j + 1];
					side[j + 1] = temp;
				}
			}
		}

		if (side[0] == 0 && side[1] == 0 && side[2] == 0) {    // 입력이 0 0 0 이면 프로그램 종료
			break;
		}
		
		else {
			if (pow(side[0], 2) == pow(side[1], 2) + pow(side[2], 2)) {  // 직각삼각형 일때
				cout << "right" << "\n";
			}
			else     // 직각삼각형이 아닐때
				cout << "wrong" << "\n";
		}
	}
	return 0;
}
