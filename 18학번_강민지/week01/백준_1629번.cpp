// 201824403 KangMinJi
// 1984kb, 0ms
#include <bits/stdc++.h>

using namespace std;

// x^2n = x^n * x^n
// x^B/2의 값을 알고 있다고 가정하고 x^B의 값을 구함
// B가 홀수이면 B/2에서 1이 누락되기 때문에 A를 한 번 더 곱해줌
unsigned long long cal(unsigned long long A, int B, unsigned long long C) {
    if(B==0) {
        return (unsigned long long)1;
    }
    else {
        unsigned long long result = cal(A, B/2, C);
        result *= result;
        result %= C;
        if(B%2==1) {
            result *= A;
            result %= C;
        }
        return result;
    }
}

int main(void) {
    unsigned long long A, C, result;
    int B;
    scanf("%llu%d%llu",&A,&B,&C);
    result = cal(A, B, C);
    printf("%llu\n",result);
    return 0;
}
