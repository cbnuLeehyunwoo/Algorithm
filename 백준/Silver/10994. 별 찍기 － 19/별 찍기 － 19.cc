#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    int size = 4 * N - 3;
    vector<vector<char>> grid(size, vector<char>(size, ' '));

    for (int layer = 0; layer < N; layer++) {
        int start = layer * 2;
        int end = size - 1 - start;

        // 위쪽, 아래쪽 변
        for (int i = start; i <= end; i++) {
            grid[start][i] = '*';
            grid[end][i] = '*';
        }
        // 왼쪽, 오른쪽 변
        for (int i = start; i <= end; i++) {
            grid[i][start] = '*';
            grid[i][end] = '*';
        }
    }

    for (auto &row : grid) {
        for (char c : row) cout << c;
        cout << '\n';
    }
}
