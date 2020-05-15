// 201924518 윤석원
// Memory: 1984KB, Time required : 0ms, May 7
#include <iostream>
using namespace std;

int main(void)
{
    int N, P, count = 1;
    
    cin>>N;
    if(N < 10)
        N *= 10;
    P = N;
    P = (P%10)*10 + (P/10 + P%10)%10;
    
    while(P!=N) {
        P = (P%10)*10 + (P/10 + P%10)%10;
        count++;
    }
    
    cout<<count<<endl;
    
    return 0;
}
