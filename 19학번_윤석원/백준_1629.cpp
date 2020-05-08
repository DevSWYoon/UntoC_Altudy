// 201924518 윤석원
// Memory:  1984KB, Time required :  0ms, May 8
#include <iostream>
using namespace std;

unsigned C;

unsigned long long modular(unsigned A, unsigned B)
{
    if (C == 1) return 0;
    
    if (B == 0) return 1;
    
    unsigned long long P = modular(A, B/2);
    P = (P * P) % C;
    
    if (B % 2) return P * A % C;
    
    else return P;
}

int main(void)
{
    unsigned A, B;
    
    cin>>A>>B>>C;
    
    cout<<modular(A,B)<<endl;
    
    return 0;
}
