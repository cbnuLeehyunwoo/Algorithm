#include <iostream>
using namespace std;

string str;
string p1 = "security";
string p2 = "bigdata";
int cnt_p1 = 0;
int cnt_p2 = 0;

void find_p1() {
	size_t pos = str.find(p1);
	while (pos != string::npos) {
		cnt_p1++;
		pos = str.find(p1, pos + p1.size());
	}
}
void find_p2() {
	size_t pos = str.find(p2);
	while (pos != string::npos) {
		cnt_p2++;
		pos = str.find(p2, pos + p2.size());
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	cin >> str;
	find_p1();
	find_p2();
	if (cnt_p1 > cnt_p2) cout << "security!";
	else if (cnt_p1 < cnt_p2) cout << "bigdata?";
	else cout << "bigdata? security!";

}