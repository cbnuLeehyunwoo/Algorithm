#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	char word[3];
	cin >> word[0] >> word[1] >> word[2];
	cout << word[2] << word[1] << word[0];
}