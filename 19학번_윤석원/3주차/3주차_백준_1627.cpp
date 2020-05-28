//201924518-SoekWonYoon
//Memory: 2116KB, Time required: 4ms, May 20
#include <iostream>

using namespace std;

int main(void)
{
    int N, cc;
    cin>>N;
    char *c;
    c = new char [N];
    cin>>c;
    
    for(int i=N-1; i>=1; --i){
        cc = c[i] + c[i-1];
        if(c[i]==c[i-1])
            c[i-1] = cc/2;
        else if(cc == 'A'+'G')
            c[i-1] = 'C';
        else if(cc == 'A'+'C')
            c[i-1] = 'A';
        else if(cc == 'A'+'T')
            c[i-1] = 'G';
        else if(cc == 'G'+'C')
            c[i-1] = 'T';
        else if(cc == 'G'+'T')
            c[i-1] = 'A';
        else if(cc == 'C'+'T')
            c[i-1] = 'G';
        c[i] = 0;
    }
    
    cout<<c<<endl;
    
    return 0;
}
// A : 97, G : 103, C : 99, T : 116
