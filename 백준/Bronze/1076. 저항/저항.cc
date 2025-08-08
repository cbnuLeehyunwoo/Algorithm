#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<string, int> v_map{ {"black", 0 }, {"brown", 1}, {"red", 2}, {"orange", 3}, {"yellow", 4}
, {"green", 5}, {"blue", 6}, {"violet", 7}, {"grey", 8}, {"white", 9} };
unordered_map<string, int> p_map{ {"black", 1 }, {"brown", 10}, {"red", 100}, {"orange", 1000}, {"yellow", 10000}
, {"green", 100000}, {"blue", 1000000}, {"violet", 10000000}, {"grey", 100000000}, {"white", 1000000000} };;
int main() {
	string a, b, c;
	cin >> a >> b >> c;
	long long value = v_map[a] * 10 + v_map[b];
	cout << value * p_map[c];
}