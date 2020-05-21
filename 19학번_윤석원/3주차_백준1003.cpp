//201924518-SoekWonYoon
//Memory: 1984KB, Time required: 4ms, May 20
#include <iostream>

using namespace std;

class Vector{
public:
    int _0;
    int _1;
    Vector(){
        _0 = 0;
        _1 = 0;
    }
    ~Vector(){}
    Vector& operator= (const Vector&v);
    Vector operator+ (const Vector &v);
    friend ostream& operator<< (ostream& os, Vector v);
};

ostream& operator<< (ostream& os, Vector v)
{
    os<<v._0<<" "<<v._1;
    return os;
}

Vector Vector::operator+(const Vector &v)
{
    Vector result;
    result._0 = _0 + v._0;
    result._1 = _1 + v._1;
    return result;
}

Vector& Vector::operator=(const Vector &v)
{
    _0 = v._0;
    _1 = v._1;
    return *this;
}

int main(void)
{
    int T;
    cin>>T;
    Vector result[T];
    
    for(int i=0; i<T; ++i){
        int N;
        cin>>N;
        Vector a[N+1];
        a[0]._0 = 1;
        a[0]._1 = 0;
        a[1]._0 = 0;
        a[1]._1 = 1;
        
        if(N < 2){
            if(N==0) result[i] = a[0];
            else result[i] = a[1];
        }
        else{
            for(int j=2; j<=N; ++j)
                a[j] = a[j-1] + a[j-2];
            result[i] = a[N];
        }
    }
    
    for(int i=0; i<T; ++i)
        cout<<result[i]<<endl;
    
    return 0;
}
