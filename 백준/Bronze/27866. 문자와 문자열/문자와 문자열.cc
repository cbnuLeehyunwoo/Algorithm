#include <iostream>
#include <string>

using namespace std;

int main()
{
	int index = 0;
	string eng_Word = " ";

	getline(cin, eng_Word);
	cin >> index;

	cout << eng_Word[index - 1];

	return 0;
}