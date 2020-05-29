#include <bits/stdc++.h>

using namespace std;

unsigned long long int comb(int num, int idx) {
    unsigned long long int result1 = 1, result2=1, result=1;
    if(num-idx<idx)
        idx = num-idx;
    for(int i = 0; i < idx; ++i) {
        result *= (unsigned long long int)(num-i);
        if(result>1000000000000000) {
            result1 = result;
            result = 1;
        }
    }
    if(result1!=1)
        result2 = result;
    else
        result1 = result;
    for(int i = 1; i <= idx; ++i) {
        if(result1%i==0)
            result1 /= (unsigned long long int)i;
        else if(result2%i==0)
            result2 /= (unsigned long long int)i;
        else {
            int copy_i = i;
            for(int j = 2; j <=j && copy_i!=1; ++j) {
                if(copy_i%j==0) {
                    if(result1 % j == 0)
                        result1 /= j;
                    else if(result2 % j == 0)
                        result2 /= j;
                    copy_i/=j;
                    j--;
                }
            }
        }
    }
    return (result1 % 10007) * (result2 % 10007);
}

int main(void) {
    int N;
    cin >> N;
    unsigned long long int result = 0;
    for(int i = 0; i < N && i < 10; ++i) {
        result += comb(10, i+1) * comb(N-1, i);
        result %= 10007;
    }
    cout << result << endl;
    return 0;
}
