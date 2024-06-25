#include<iostream>
#include<string>
using namespace std;

int main()
{
	int A = 0;
	int B = 0;

	cin >> A >> B;
	if (A > B) // A가 B보다 클 때
	{
		cout << ">" << endl;
		return 0;
	}
	else if (A < B)  // B가 A보다 클 때
	{
		cout << "<" << endl;
		return 0;
	}
	else //  A,B가 같을 때
	{
		cout << "==" << endl;
		return 0;
	}
}