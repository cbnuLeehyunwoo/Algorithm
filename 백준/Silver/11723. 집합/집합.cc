#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;
unordered_set<int> s;
int set[21] = { 0, };
void add(int x) {
	if (set[x] == x) {
		return;
	}
	else {
		set[x] = x;
	}
}
void check(int x) {
	if (set[x] == x) {
		cout << 1 << "\n";
	}
	else
		cout << 0 << "\n";
}
void remove(int x) {
	set[x] = 0;
}
void toggle(int x) {
	if (set[x] == x) {
		set[x] = 0;
	}
	else {
		set[x] = x;
	}
}
void all() {
	for(int i = 1; i < 21; i++) {
		set[i] = i;
	}
}
void empty() {
	for (int i = 1; i < 21; i++) {
		set[i] = 0;
	}
}
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		string str;
		cin >> str;
		int temp;
		if (str == "add") {
			cin >> temp;
			add(temp);
		}
		else if (str == "remove"){
			cin >> temp;
			remove(temp);
		}
		else if (str == "check") {
			cin >> temp;
			check(temp);
		}
		else if (str == "toggle") {
			cin >> temp;
			toggle(temp);
		}
		else if (str == "all") {
			all();
		}
		else if (str == "empty") {
			empty();
		}
	}
}