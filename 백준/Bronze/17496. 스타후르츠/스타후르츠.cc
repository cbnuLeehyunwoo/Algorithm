#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, T, C, P;

	cin >> N >> T >> C >> P;
	
	int revenue = 0; // 총 수익 = 답
	int count = 0; // 지낸 일 수 (if. count가 3이면 3일을 보냈다는 뜻)
	for (int i = 1; i <= N; i++) {

		if (count % T == 0) { // 스타후르츠 수확일이면
			if(count != 0) // 1일째를 예외로 둠
				revenue = revenue + (C * P);
		}
		count++; // 하루가 끝남
	}

	cout << revenue;

	return 0; 
}