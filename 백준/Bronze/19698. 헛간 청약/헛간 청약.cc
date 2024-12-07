#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	int N, W, H, L;
	int cowcnt = 0;
	int widecnt = 0;
	cin >> N >> W >> H >> L;

	int maxwidth = W / L;
	int maxheight = H / L;

	int maxcow = maxwidth * maxheight;

	cout << min(maxcow, N);
}