#include <iostream>
#include <string>

using namespace std;

int main()
{
	int testcase = 0;
	int H = 0;
	int W = 0;
	int N = 0;
	string floorNum;
	cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		cin >> H >> W >> N;
		if (H >= N) {								// H 가 N보다 크거나 같은 경우 (뒷자리가 반드시 01로 끝남)			
			floorNum = to_string(N) + "01";
		}
		else if (N % H  == 0) {					// H가 N보다 작으면서 나누어 떨어지는 경우
			int firstN = H;
			int LastN = N / H; 
			if (LastN >= 10) {							// 계산한 뒷자리가 10보다 클 경우 중간에 0을 붙이지 않음
				floorNum = to_string(firstN) + to_string(LastN);
				cout << floorNum << "\n";
				continue;
			}
			floorNum = to_string(firstN) + "0" + to_string(LastN);  // 10보다 큰 경우에는 0을 붙임
		}
		else {			// 그 외의 경우
			int firstN = N % H;
			int LastN = N / H + 1;
			if (LastN >= 10) {							// 계산한 뒷자리가 10보다 클 경우 중간에 0을 붙이지 않음
				floorNum = to_string(firstN) + to_string(LastN);
				cout << floorNum << "\n";
				continue;
			}
			floorNum = to_string(firstN) + "0" + to_string(LastN);  // 10보다 큰 경우에는 0을 붙임
		}
		cout << floorNum << "\n";
	}

}
