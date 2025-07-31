#include <climits>
#include <limits>
#include <iostream>
using ll = long long;
using namespace std;

bool check_int_oflw(ll a) {
	return (a > numeric_limits<int>::max() 
		|| a < numeric_limits<int>::min());
}

bool check_short_oflw(ll a) {
	return (a > numeric_limits<short>::max()
		|| a < numeric_limits<short>::min());
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll a;
	cin >> a;
	if (check_int_oflw(a)) cout << "long long";
	else if (check_short_oflw(a)) cout << "int";
	else cout << "short";
}