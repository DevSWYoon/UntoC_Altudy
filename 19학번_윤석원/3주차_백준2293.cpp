//201924518-SoekWonYoon
//Memory: 1984KB, Time required: 0ms, May 21
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, k, *a;
    unsigned long *result;
    cin>>n>>k;
    result = new unsigned long [k+1];
    for(int i=0; i<=k; ++i)
        result[i] = 0;
    a = new int [n];
    for(int i=0; i<n; ++i)
        cin>>a[i];
    
    sort(a, a + n);
    result[0] = 1;
    
    for(int i=0; i<n; ++i)
        for(int j=a[i]; j<=k; ++j)
            if(j-a[i] >= 0)
                result[j] += result[j-a[i]];
                
    
    cout<<result[k]<<endl;
    
    
    return 0;
}
