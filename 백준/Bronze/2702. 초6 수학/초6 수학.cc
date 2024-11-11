#include <iostream>
#include <string>

using namespace std;
							 
int main() {
	int N = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b;
		int result1 = 0;
		int result2 = 0;
		cin >> a >> b;
		for (int j = 1; j <= a * b; j++) {
			if (a % j == 0 && b % j == 0) {
				result1 = j;
			}
			if (j % a == 0 && j % b == 0) {

				result2 = j;
				// 최소공배수는 최대공약수보다 반드시 크기 때문에
				// 최소공배수까지 찾았다면 더 찾을 필요가 없다. 
				break;  
			}
			
		}
		cout << result2 << " " << result1 << "\n";
	}
}