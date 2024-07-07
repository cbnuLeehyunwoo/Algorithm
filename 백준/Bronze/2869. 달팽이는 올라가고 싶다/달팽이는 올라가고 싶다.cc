#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int A;
	int B;
	int V;
	int location = 0;
	cin >> A >> B >> V;

	
	int day = (V - B - 1) / (A - B) + 1;    // V-A: 다음날에 바로 올라갈 수 있는 높이, A-B: 하루에 올라가는 높이
	cout << day;
	//while (true) {
	//	day++;
	//	location += A;    // 하루에 올라가는 거리 더함
	//	if (location >= V) {	  // 목표를 달성했다면 종료
	//		cout << day;
	//		break;
	//	}
	//	location -= B;    // 자는동안 미끄러짐
	//	
	//}
}
