#include<iostream>
#include<string>
using namespace std;

int main()
{
	int numWord = 0;
	string sentence;
	getline(cin, sentence);
	int strsize = sentence.length();
	for (int i = 0; i < strsize; i++) {
		if (sentence[i] == ' ' && i != 0) {
			while (sentence[i] != ' ' && i != strsize - 1) {
				i++;
			}
			numWord++;
		}

		if (sentence[i] != ' ') {
			while (sentence[i] != ' ' && i != strsize - 1) {
				i++;
			}
			numWord++;
		}
	}
	cout << numWord << endl;
}