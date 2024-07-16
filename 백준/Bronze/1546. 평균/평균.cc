#include <iostream>
using namespace std;

float chngscore(int a, int max) {
    return static_cast<double>(a) / static_cast<double>(max) * 100.0f;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N = 0; // 시험본 과목의 개수
    int max = 0; // 최고점 과목
    double sum = 0.0f;
    double score[1001] = { 0.0, };
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> score[i];
        if (max < score[i]) {
            max = score[i];
        }
    }
    for (int i = 0; i < N; i++) {
        score[i] = static_cast<double>(chngscore(score[i], max));
        sum += score[i];
    }

    cout << sum / static_cast<float>(N) << endl;

    return 0;
}
