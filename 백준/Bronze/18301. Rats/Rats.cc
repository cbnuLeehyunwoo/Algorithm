#include <iostream>
#include <string>

using namespace std;

							 
int main() {
	int n1, n2, n12;
	cin >> n1 >> n2 >> n12;

	int result = (n1 + 1) * (n2 + 1) / (n12 + 1) - 1;
	cout << result;
}