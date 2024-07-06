#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N = 0;
	int cnt = 0;
	cin >> N;
	for (int i = 5; i <= N; i*=5) {      // 1*2*....*N의 10(2*5)의 갯수를 구하면 됨, 하지만 5의 개수가 반드시 2의 개수보다 많으므로.
		cnt += (N / i);					 // 5의 개수만 구한다, 
	}

	cout << cnt;

	return 0;
}
