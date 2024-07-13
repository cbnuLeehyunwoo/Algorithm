#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void FizzBuzz(int index, string input);
int main()
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	string input[3];
	cin >> input[0];
	cin >> input[1];
	cin >> input[2];



	if (input[2][0] >= 48 && input[2][0] <= 57) { // 마지막 입력값이 숫자일 경우
		FizzBuzz(2, input[2]);
	}
	else if (input[1][0] >= 48 && input[1][0] <= 57) { // 중간 입력값이 숫자일 경우
		FizzBuzz(1, input[1]);
	}
	else                                               // 첫번째 입력값이 숫자인 경우
		FizzBuzz(0, input[0]);
}

void FizzBuzz(int index, string input)
{
	int next_N = stoi(input) + (3 - index);
	if (next_N % 3 == 0) {						// 3의 배수일 경우
		if (next_N % 5 == 0) {					// 3의 배수이면서 5의 배수일 경우 FizzBuzz 출력
			cout << "FizzBuzz";
		}
		else {							// 3의 배수이면서 5의 배수가 아닐 경우 Fizz 출력
			cout << "Fizz";
		}
	}
	else if (next_N % 5 == 0) {
		cout << "Buzz";					// 3의 배수가 아니면서 5의 배수일 경우 Buzz 출력
	}
	else {
		cout << next_N;
	}
}