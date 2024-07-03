#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() 
{
	map<char, int> alphaOrder;
	
	string word_S;
	getline(cin, word_S);

	for (char c = 'a'; c <= 'z'; c++) {
		alphaOrder.insert({ c, -1 });      // a~z까지 기본값 할당(-1)
	}

	for (int i = 0; i < word_S.size(); i++) {   // 문자열에서 각 문자의 인덱스를 map의 값으로 저장
		if (alphaOrder[word_S[i]] == -1) {
			alphaOrder[word_S[i]] = i;
		}
	}

	for (char c = 'a'; c <= 'z'; c++) {
		cout << alphaOrder[c] << " ";
	}
	return 0;
}