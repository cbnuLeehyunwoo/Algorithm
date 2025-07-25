#include <iostream>
#include <algorithm>
using namespace std;

int grid[16][16];
int dp[16][16];
int n;
int rcnt, dcnt;
int Mpath_rec(int i, int j) {
    if(i == 0 || j == 0) {
        rcnt++;
        return 0;
    }
    else {
        return (grid[i][j] + max(Mpath_rec(i-1, j), Mpath_rec(i, j-1)));
    }
}
void Mpath_wrap() {
    Mpath_rec(n, n);
}
void Mpath_dp() {
    for(int i = 0; i < n; i++) {
        dp[i][0] = 0;
        dp[0][i] = 0;
    }
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            dcnt++;
            dp[i][j] = grid[i][j] + max(dp[i-1][j], dp[i][j-1]);
        }
    }
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    Mpath_wrap();
    Mpath_dp();
    cout << rcnt << " " << dcnt;
    
    
}