#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
	long long x1, y1, r1;
	long long x2, y2, r2;
	cin >> x1 >> y1 >> r1;
	cin >> x2 >> y2 >> r2;
	double dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	if (dist >= r1 + r2) cout << "NO";
	else cout << "YES";
}