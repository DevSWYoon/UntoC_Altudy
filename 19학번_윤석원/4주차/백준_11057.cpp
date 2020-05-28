//201924518 - SoekWonYoon
//Memory : , Time required : ms, May 28
#include <iostream>

using namespace std;

struct dps{
    unsigned long long val;
    unsigned long long s[10];
};

int main(void)
{
    int N;
    cin>>N;
    unsigned long long change;
    dps *dp;
    dp = new dps [N+1];
    for(int i=0; i<10; ++i){
        dp[1].s[i] = 1;
        dp[2].s[i] = 10-i;
    }
    dp[1].val = 10;
    dp[2].val = 55;
    
    for(int i=3; i<=N; ++i){
        dp[i].val = 0;
        change = dp[i-1].val - dp[i-2].val;
        for(int j=1; j<=9; ++j){
            dp[i].val += change;
            dp[i].s[j] = change;
            change -= dp[i-1].s[j];
        }
        dp[i].val += dp[i-1].val;
    }
    
    cout<<dp[N].val%10007<<endl;
    
    return 0;
}
