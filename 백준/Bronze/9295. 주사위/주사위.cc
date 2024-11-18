#include <iostream>
#include <queue>
#include <string>


using namespace std;
int main() {
	int N = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a = 0;
		int b = 0;
		cin >> a >> b;
		cout << "Case " << i + 1 << ": " << a + b << "\n";
	}
}
