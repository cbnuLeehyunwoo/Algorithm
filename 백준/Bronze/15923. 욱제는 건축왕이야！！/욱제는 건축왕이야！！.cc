#include <iostream>
#include <math.h>

using namespace std;

double get_Dist(int x1, int y1, int x2, int y2) {
	double dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return dist;
}


int main() {
	int n;
	cin >> n;
	double sum_dist = 0.0;
	int a, b;
	int fx, fy;
	cin >> fx >> fy;
	int px, py;
	px = fx;
	py = fy;
	
	for (int i = 1; i < n; i++) {
		
		int a, b;
		cin >> a >> b;
		double dist = get_Dist(px, py, a, b);
		sum_dist += dist;
		px = a;
		py = b;
	}
	sum_dist += get_Dist(px, py, fx, fy);
	cout << sum_dist;
}