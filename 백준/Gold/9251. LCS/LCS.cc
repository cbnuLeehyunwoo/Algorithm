#include <iostream>
#include <string>
#include <algorithm>
#define SIZE 1001
using namespace std;
string a, b;
int grid[SIZE][SIZE];

void buildDP() {
	for (int i = 0; i <= a.size(); i++) {
		grid[i][0] = 0;
	} 
	for (int i = 0; i <= b.size(); i++) {
		grid[0][i] = 0;
	}
	for (int i = 1; i <= a.size(); i++) {
		for (int j = 1; j <= b.size(); j++) {
			if (a[i - 1] == b[j - 1]) {
				grid[i][j] = grid[i - 1][j - 1] + 1;
			}
			else grid[i][j] = max(grid[i - 1][j], grid[i][j - 1]);
		}
	}
}

int main() {
	cin >> a;
	cin >> b;
	buildDP();
	cout << grid[a.size()][b.size()] << "\n";
	
	//for (int i = 0; i <= a.size(); i++) {
	//	for (int j = 0; j <= b.size(); j++) {
	//		cout << grid[i][j] << " ";
	//	}
	//	cout << "\n";
	//}
}