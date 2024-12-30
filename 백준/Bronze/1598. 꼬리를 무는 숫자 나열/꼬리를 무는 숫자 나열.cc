#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long int a, b;
	cin >> a >> b;

	int row_a = (a - 1) / 4; // a의 행 
	int col_a = (a - 1) % 4; // 열
	int row_b = (b - 1) / 4; // b의 행
	int col_b = (b - 1) % 4; // 열
	cout << abs(row_a - row_b) + abs(col_a - col_b);

}
