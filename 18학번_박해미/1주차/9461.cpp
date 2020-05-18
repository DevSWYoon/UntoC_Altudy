// 201824484 Park Haemi
// 1984kb 4ms

#include <bits/stdc++.h>
using namespace std;

int padovan(int num) {
    long long dp[num+1];

    for(int i=1; i<num+1; i++){
        if (i==1) {
            dp[i] = 1;
        }
        else if(i==2) {
            dp[i] = 1;
        }
        else if(i==3) {
            dp[i] = 1;
        }
        else if(i==4) {
            dp[i] = 2;
        }
        else if(i==5) {
            dp[i] = 2;
        }
        else {
            dp[i] = dp[i-5] + dp[i-1];
        }
    }

    cout << dp[num] << endl;

    return dp[num];
}

int main()
{
    int n;
    cin >> n;
    int test[n];

    for(int i=0; i<n; i++) {
        cin >> test[i];
    }

    for(int i=0; i<n; i++) {
        padovan(test[i]);
    }

    return 0;
}
