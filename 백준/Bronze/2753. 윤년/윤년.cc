#include <iostream>
#include <string>

using namespace std;

int main()
{
    int year = 0;
    cin >> year;
    bool isleap;
    if ((year % 400) == 0) {  // 경우 1: 400의 배수이면 윤년
        isleap = true;
    }
    else if (((year % 4) == 0) && ((year % 100) != 0)) {  // 경우 2: 4의 배수이면서 100의 배수가 아니면 윤년
        isleap = true;
    }
    else
        isleap = false;
    cout << isleap;
    return 0;
}
