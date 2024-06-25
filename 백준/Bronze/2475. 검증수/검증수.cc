#include<iostream>
#include<string>
#include<math.h>
using namespace std;

float Goyu_Pow(int n) {
	float pow_result = pow(n, 2);
	return pow_result;
}

int Get_Last_GoyuN(int n) {
	int LastN_result = n % 10;
	return LastN_result;
}

int main()
{
	float Goyu_Hap = 0;
	float Last_GoyuN = 0;
	float Goyu_N[6] = { 0, };
	for (int i = 0; i < 5; i++) {
		cin >> Goyu_N[i];
	} 
	for (int j = 0; j < 5; j++) {
		Goyu_N[j] = Goyu_Pow(Goyu_N[j]);
		Goyu_Hap += Goyu_N[j];
	}
	Last_GoyuN = Get_Last_GoyuN(Goyu_Hap);
	cout << Last_GoyuN << endl;
	return 0;
}
