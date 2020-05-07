// 201824403 KangMinJi
// 1984kb, 0ms
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int N, M, K, rest = 0;
    scanf("%d%d%d",&N,&M,&K);
    // 여자의 수가 홀수면 한 명을 나머지로 빼줌
    if(N%2==1) {
        N -= 1;
        rest += 1;
    }
    // 여자의 수가 남자의 수의 2배보다 많을 경우 팀을 이루지 못할 사람을 나머지로 빼줌
    if(N>2*M) {
        rest += N - 2*M;
        N = 2*M;
    }
    // 남자의 수가 여자의 수의 1/2배보다 많을 경우 팀을 이루지 못할 사람을 나머지로 빼줌
    else if(N<2*M) {
        rest = M - N/2;
        M = N/2;
    }
    // 인턴쉽에 필요한 인원이 나머지 인원보다 많을 경우 한 팀씩 해체 후 인턴십 인원에 더해줌
    while(K>rest) {
        rest += 3;
        M -= 1;
    }
    // 남자의 수 == 팀의 수이기 때문에 남자의 수를 출력
    printf("%d\n", M);
    return 0;
}
