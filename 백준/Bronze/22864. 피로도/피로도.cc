#include <iostream>

using namespace std;

int main() {
	int a, b, c, m;
	int hour = 0;
	int piro = 0;
	int work = 0;
	cin >> a >> b >> c >> m;
	while(hour < 24) {
		if(piro + a > m) {
			piro -= c;
			if(piro < 0) {
				piro = 0;
			}
		}
		else {
			piro += a;
			work += b;
		}
		hour++;
	}
	cout << work;
}