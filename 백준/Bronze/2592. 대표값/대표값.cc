#include <iostream>
using namespace std;
#define SIZE 1001
int arr[SIZE];
pair<int, int> res;

int main(void)
{
	int sum = 0;
	
	for (int i = 0; i < 10; i++)
	{
		int num=0;
		cin >> num;
		sum += num;
		arr[num]++;
		if (res.first < arr[num])
		{
			res.first = arr[num];
			res.second = num;
		}

	}
	cout << sum / 10 << "\n" << res.second;

}