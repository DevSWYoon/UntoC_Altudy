// 201824484 박해미
// 1980kb 0ms
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int init;
    int num;
    int result=0;

    cin >> init;
    num = init;

    // error
    if (init < 0 || init > 99) {
        return -1;
    }

    while(num!=init || (num==init&&result==0)) {
        // 일의 자리
        int units = num%10;
        // 십의 자리
        int tens = num/10;

        int newNum = units+tens;

        num = (num%10)*10 + (newNum%10);
        result++;
    }

    cout << result;
    return 0;
}
