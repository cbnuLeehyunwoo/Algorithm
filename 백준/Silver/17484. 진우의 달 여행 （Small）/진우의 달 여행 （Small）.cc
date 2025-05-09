#include <iostream>
#include <climits>
using namespace std;

int n, m;
int grid[7][7];
int dp[7][7][3]; 

int main() {
    cin >> n >> m;


    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];


    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            for (int d = 0; d < 3; d++)
                dp[i][j][d] = INT_MAX;


    for (int j = 0; j < m; j++) {
        dp[0][j][0] = grid[0][j]; 
        dp[0][j][1] = grid[0][j]; 
        dp[0][j][2] = grid[0][j]; 
    }

 
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int d = 0; d < 3; d++) {
                int prev_j;

                if (d == 0) prev_j = j - 1;
                else if (d == 1) prev_j = j;     
                else if (d == 2) prev_j = j + 1;  

                if (prev_j < 0 || prev_j >= m) continue;

                for (int prev_d = 0; prev_d < 3; prev_d++) {
                    if (prev_d == d) continue; 
                    if (dp[i - 1][prev_j][prev_d] == INT_MAX) continue;

                    int new_cost = dp[i - 1][prev_j][prev_d] + grid[i][j];
                    if (new_cost < dp[i][j][d]) {
                        dp[i][j][d] = new_cost;
                    }
                }
            }
        }
    }

    int result = INT_MAX;
    for (int j = 0; j < m; j++) {
        for (int d = 0; d < 3; d++) {
            if (dp[n - 1][j][d] < result) {
                result = dp[n - 1][j][d];
            }
        }
    }

    cout << result << "\n";
    return 0;
}
