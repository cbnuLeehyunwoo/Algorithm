#include<iostream>

using namespace std;

int main()
{
	int first = 0;
	int second = 0;

	cin >> first;
	cin >> second;
	int one = second % 10;
	int ten =(second / 10) % 10;
	int hundred = second / 100;

	cout << first * one << endl;
	cout << first * ten << endl;
	cout << first * hundred << endl;
	cout << first * second << endl;


}