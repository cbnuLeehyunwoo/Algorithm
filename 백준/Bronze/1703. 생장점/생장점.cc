#include <iostream>
using namespace std;
int main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while (true)
    {
        int a;
        cin >> a;
        if (a == 0) break;
        int result = 1;

        for (int i = 0; i < a; i++)
        {
            int s, b;
            cin >> s >> b;
            result *= s;
            result -= b;
        }
        cout << result << "\n";

    }
}
