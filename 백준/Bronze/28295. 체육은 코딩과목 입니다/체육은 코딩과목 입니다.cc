#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int view = 0; // 초가에는 북쪽을 바라본다
	int command = 0;
	for (int i = 0; i < 10; i++) {
		cin >> command;
		if (command == 1) {
			view += 90;
		}
		else if (command == 2) {
			view += 180;
		}
		else if (command == 3) {
			view += 270;
		}
	}

	while (true) {
		if (view - 360 < 0) {
			break;
		}
		view -= 360;
	}
	
	if (view == 0) {
		cout << 'N';
	}
	else if(view == 90) {
		cout << 'E';
	}
	else if (view == 180) {
		cout << 'S';
	}
	else if (view == 270) {
		cout << 'W';
	}

}