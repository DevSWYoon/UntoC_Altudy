// 201824484 Park Haemi
// 1984kb 0ms
#include <bits/stdc++.h>
using namespace std;

int getDistance(int a, int b)
{
    int result = a-b;

    if (result < 0 ) {
        result *= -1;
    }

    return result;
}

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int dis_w, dis_h;

    dis_w = min(getDistance(0, x), getDistance(x, w));
    dis_h = min(getDistance(0, y), getDistance(y, h));

    int result = min(dis_w, dis_h);

    cout << result;

    return 0;
}
