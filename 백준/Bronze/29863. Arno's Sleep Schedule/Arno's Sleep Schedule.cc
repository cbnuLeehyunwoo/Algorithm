#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
	int stime = 0;
	int wtime = 0;
	cin >> stime >> wtime;
	if (stime >= 0 && stime <= 3) {
		cout << wtime - stime;
	}
	else {
		cout << 24 - stime + wtime;
	}

}