#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int scoreA, scoreB;
  cin >> scoreA >> scoreB;

  int scoreC = scoreA ^ scoreB;

  cout << scoreC << "\n";

  return 0;
}