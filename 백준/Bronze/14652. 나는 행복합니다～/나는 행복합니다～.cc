#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	int N, M, K;
	cin >> N >> M >> K;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cnt++; 
			if (cnt == K + 1) {
				cout << i <<  " " << j;
				return 0;
			}
		}
	}
}