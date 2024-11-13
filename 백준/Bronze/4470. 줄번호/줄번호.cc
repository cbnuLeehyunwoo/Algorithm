#include <iostream>
#include <queue>
#include <string>


using namespace std;
int main() {
	int N = 0;
	string str;
	cin >> N;
	cin.get();
	for (int i = 0; i < N; i++) {
		getline(cin, str);
		cout << i + 1 << ". " << str << "\n";
	}
}
