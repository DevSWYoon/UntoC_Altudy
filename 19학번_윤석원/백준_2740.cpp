//201924518-SoekWonYoon
//Memory: 1984KB, Time required: 8ms, May 14

#include <iostream>

using namespace std;

int main(void)
{
    int N, M, K;
    int **A, **B, **R;
    cin>>N>>M;
    A = new int*[N];
    for(int i=0; i < N; ++i)
        A[i] = new int[M];
    
    for(int i=0; i < N; ++i)
        for(int j=0; j<M; ++j)
            cin>>A[i][j];
    cin>>M>>K;
    B = new int*[M];
    for(int i=0; i<M; ++i)
        B[i] = new int[K];
    R = new int*[N];
    for(int i=0; i<N; ++i)
        R[i] = new int[K];
    for(int i=0; i<N; ++i)
        for(int j=0; j<K; ++j)
            R[i][j] = 0;
    
    for(int i=0; i<M; ++i)
        for(int j=0; j<K; ++j)
            cin>>B[i][j];
    
    for(int i=0; i<N; ++i)
        for(int j=0; j<K; ++j)
            for(int ac=0; ac<M; ++ac)
                R[i][j] += A[i][ac]*B[ac][j];
    
    for(int i=0; i<N; ++i){
        for(int j=0; j<K; ++j)
            cout<<R[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}
