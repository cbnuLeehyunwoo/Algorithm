#include <iostream>
#include <string>


using namespace std;

int main() {
	int beer, mlt, wine, carbon, sltzr, wtr;
	cin >> beer >> mlt >> wine >> carbon >> sltzr >> wtr;
	cout << 5 * (beer + mlt + wine + carbon + sltzr + wtr);
}
