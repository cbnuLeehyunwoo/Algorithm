#include <iostream>
#include <climits>
using namespace std;
#define SIZE 501
int p[SIZE];
int dp[SIZE][SIZE];
void buildDP(int n) {
	for(int i = 0; i <= n; i++) {
		dp[i][i] = 0;
	}
	for(int r = 1; r <= n-1; r++) {
		for(int i = 1; i <= n-r; i++) {
			int j = r+i;
			int min = INT_MAX;
			for(int k = i; k <= j - 1; k++) {
				int temp = dp[i][k] + dp[k+1][j] + p[i-1]*p[k]*p[j];
				if(min > temp) min = temp;
			}
			dp[i][j] = min;
		}
	}
	cout << dp[1][n];
}


int main() {
	int N;
	cin >> N;
	for(int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		p[i] = a;
		p[i+1] = b;
	}
	buildDP(N);
}