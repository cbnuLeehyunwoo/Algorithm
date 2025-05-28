#include <iostream>
#include <string>
#include <algorithm>
#define SIZE 3003
using namespace std;
string a, b;
int grid[SIZE][SIZE];

void buildDP() {
	size_t n = a.size();
	size_t m = b.size();

	for (int i = 3; i <= n; i+=3) {
		for (int j = 3; j <= m; j+=3) {
			if (a.substr(i - 3, 3) == b.substr(j - 3, 3)) {
				grid[i][j] = grid[i - 3][j - 3] + 1;
			}
			else grid[i][j] = max(grid[i - 3][j], grid[i][j - 3]);
		}
	}
	cout << grid[n][m] << "\n";
}

int main() {
	cin >> a;
	cin >> b;
	buildDP();


	//for (int i = 0; i <= a.size(); i++) {
	//	for (int j = 0; j <= b.size(); j++) {
	//		cout << grid[i][j] << " ";
	//	}
	//	cout << "\n";
	//}
}