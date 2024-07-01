#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<int, int> remainMap;
	int number[10] = { 0, };
	int remain = 0;
	for (int i = 0; i < 10; i++) {
		cin >> number[i];
		remain = (number[i] % 42);
		remainMap[remain]++; // 딕셔너리에 추가
	}
	cout << remainMap.size();  // 나머지의 개수 출력
	return 0;

}