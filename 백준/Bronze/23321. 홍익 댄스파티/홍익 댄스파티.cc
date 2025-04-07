#include <iostream>
#include <string>
using namespace std;
string grid[5];
string res[5];

int main() {
	for (int i = 0; i < 5; i++) {
		string temp;
		cin >> temp;
		grid[i] = temp;
		res[i] = temp;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < grid[0].size(); j++) {
			if (grid[i][j] == 'm') {
				res[i - 2][j] = 'o';
				res[i - 1][j] = 'w';
				res[i][j] = 'l';
				res[i + 1][j] = 'n';
				res[i + 2][j] = '.';
			}
			else if (grid[i][j] == 'w') {
				res[i - 1][j] = '.';
				res[i][j] = 'o';
				res[i + 1][j] = 'm';
				res[i + 2][j] = 'l';
				res[i + 3][j] = 'n';
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < res[0].size(); j++) {
			cout << res[i][j];
		}
		cout << "\n";
	}
}