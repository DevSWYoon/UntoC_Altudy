// 201824484 Park Haemi
// 1984kb 0ms

#include <bits/stdc++.h>
using namespace std;
#define WOMAN 2
#define MAN 1

int main()
{
    // n: woman m: man
    int n, m, k;
    int team;
    cin >> n >> m >> k;

    for(int i=k; i>0; i--){
        if(n/2 >= m) {
            n--;
        }
        else {
            m--;
        }

    }

    team = min(n/2, m);

    cout << team;
    return 0;
}
