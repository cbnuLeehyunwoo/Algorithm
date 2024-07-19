#include <iostream>
#include <algorithm>
using namespace std;

int cmp(string a, string b) {
 	if (a.length() == b.length()) {  	  // 길이가 같다면, 사전순으로
		return a < b;
	}
	else {									// 길이가 다르다면, 짧은 순으로 
		return a.length() < b.length();  
	}
}

string word[20000];

int main() {
	int N;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> word[i];
	}

	sort(word, word + N, cmp);

	for (int i = 0; i < N; i++) {
		if (word[i] == word[i - 1]) { 	  // 중복된 경우 한번만 출력
			continue;
		}
		cout << word[i] << "\n";
	}

	return 0;
}
