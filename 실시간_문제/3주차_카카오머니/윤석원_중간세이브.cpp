#include <iostream>
#include <algorithm>

using namespace std;

class bank{
public:
    long long int a;
    long long int b;
    bank(){}
    ~bank(){}
    friend istream& operator>>(istream &is, bank &b);
};

istream& operator>>(istream &is, bank &b)
{
    cin>>b.a>>b.b;
    return is;
}

int main(void)
{
    int N, end;
    long long int M, *M_P;
    cin>>N;
    M_P = new long long int [N];
    bank log[N+1];
    
    log[0].a = 0;
    log[0].b = 0;
    for(int i=1; i<N+1; ++i)
        cin>>log[i];
    
    end = 0;
    for(int i=1; i<N+1; ++i)
        if(log[i].a + log[i-1].b<0)
            M_P[end++] = log[i].b - (log[i].a + log[i-1].b);
    
    if(end==0)
        M = 1;
    else{
        sort(M_P, M_P + end);
        M = M_P[0];
        for(int i=1; i<end; ++i){
            if(!(M_P[i]%M==0)){
                M = -1;
                break;
            }
        }
    }
    
    cout<<M<<endl;
    
    return 0;
}
