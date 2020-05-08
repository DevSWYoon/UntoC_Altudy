// 201924518 윤석원
// Memory: 1984KB , Time required : 4ms , May 7
#include <iostream>
using namespace std;

int main(void)
{
    unsigned long long dp[101] = {1,1,1,1,2,2,3,4,5, };
    int i, T, highest_v = 0;
    
    cin>>T;
    unsigned long long result[T];
    int N[T];
    
    for (i=0; i<T; ++i) {
        cin>>N[i];
        if (N[i] > highest_v)
            highest_v = N[i];
    }
    
    for (i=0; i<T; ++i)
        if (highest_v > 8)
            for (int j=9; j<=highest_v; ++j)
                dp[j] = dp[j-1] + dp[j-5];
    
    for (i=0; i<T; ++i)
        result[i] = dp[N[i]];
    
    for (i=0; i<T; ++i)
        cout<<result[i]<<endl;
    
    return 0;
}
