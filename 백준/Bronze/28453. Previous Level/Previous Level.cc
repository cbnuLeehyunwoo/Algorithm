#include <iostream>

using namespace std;

int N;
int M[101];
int gugan[101];

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> M[i];
		if (M[i] == 300) {
			gugan[i] = 1;
		}
		else if (M[i] >= 275) {
			gugan[i] = 2;
		}
		else if (M[i] >= 250) {
			gugan[i] = 3;
		}
		else
			gugan[i] = 4;
	}
	
	for (int i = 0; i < N; i++) {
		cout << gugan[i] << " ";
	}
}