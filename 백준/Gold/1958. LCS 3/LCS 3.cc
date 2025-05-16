#include <iostream>
#include <string>
#include <algorithm>
#include <initializer_list>
#define SIZE 101
using namespace std;
string a, b, c;
int grid[SIZE][SIZE][SIZE];

void buildDP() {
	for (int i = 0; i <= a.size(); i++) {
		grid[i][0][0] = 0;
	}
	for (int i = 0; i <= b.size(); i++) {
		grid[0][i][0] = 0;
	}
	for (int i = 0; i <= b.size(); i++) {
		grid[0][0][i] = 0;
	}
	for (int i = 1; i <= a.size(); i++) {
		for (int j = 1; j <= b.size(); j++) {
			for (int k = 1; k <= c.size(); k++) {
				if (a[i - 1] == b[j - 1] && b[j - 1] == c[k - 1]) {
					grid[i][j][k] = grid[i - 1][j - 1][k - 1] + 1;
				}
				else grid[i][j][k] = max({ grid[i - 1][j][k], grid[i][j - 1][k], grid[i][j][k - 1]
					, grid[i][j][k - 1], grid[i - 1][j - 1][k], grid[i - 1][j][k - 1], grid[i][j - 1][k - 1] });
			}
		}
	}
}

int main() {
	cin >> a;
	cin >> b;
	cin >> c;
	buildDP();
	cout << grid[a.size()][b.size()][c.size()] << "\n";

	//for (int i = 0; i <= a.size(); i++) {
	//	for (int j = 0; j <= b.size(); j++) {
	//		cout << grid[i][j] << " ";
	//	}
	//	cout << "\n";
	//}
}