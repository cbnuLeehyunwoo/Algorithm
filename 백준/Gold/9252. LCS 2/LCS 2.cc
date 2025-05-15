#include <iostream>
#include <string>
#include <algorithm>
#define SIZE 1001
using namespace std;

string a, b;
int grid[SIZE][SIZE];
int dir[SIZE][SIZE]; // 방향 정보

void buildDP() {
    for (int i = 1; i <= a.size(); i++) {
        for (int j = 1; j <= b.size(); j++) {
            if (a[i - 1] == b[j - 1]) {
                grid[i][j] = grid[i - 1][j - 1] + 1;
                dir[i][j] = 1; // 대각선
            } else if (grid[i - 1][j] >= grid[i][j - 1]) {
                grid[i][j] = grid[i - 1][j];
                dir[i][j] = 2; // 위쪽
            } else {
                grid[i][j] = grid[i][j - 1];
                dir[i][j] = 3; // 왼쪽
            }
        }
    }
}

string getLCS() {
    string result = "";
    int i = a.size();
    int j = b.size();
    while (i > 0 && j > 0) {
        if (dir[i][j] == 1) {
            result += a[i - 1];
            i--; j--;
        } else if (dir[i][j] == 2) {
            i--;
        } else {
            j--;
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    cin >> a >> b;
    buildDP();
    string lcs = getLCS();
    cout << grid[a.size()][b.size()] << "\n";
    cout << lcs << "\n";
}
