#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int R1 = 0; // 첫번째 수
	int R2 = 0; // 두번째 수
	int avg = 0; // 평균

	cin >> R1 >> avg;

	R2 = avg * 2 - R1;
	cout << R2;

	return 0;
  }