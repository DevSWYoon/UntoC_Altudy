//201924518 - SoekWonYoon
//Memory : 1984KB, Time required : 0ms, May 28
#include <iostream>

using namespace std;

int main(void)
{
    int T, *result;
    cin>>T;
    result = new int [T];
    
    for(int i=0; i<T; ++i){
        int n, *dp;
        cin>>n;
        dp = new int [n];
        dp[0] = 1;
        dp[1] = 2;
        dp[2] = 4;
        if(n<=3)
            result[i] = dp[n-1];
        else{
            for(int j=3; j<n; ++j)
                dp[j] = dp[j-1] + dp[j-2] + dp[j-3];
            
            result[i] = dp[n-1];
        }
    }
    
    for(int i=0; i<T; ++i)
        cout<<result[i]<<endl;
    
    return 0;
}
