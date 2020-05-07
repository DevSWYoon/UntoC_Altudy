#include<bits/stdc++.h>

using namespace std;

// 6번째부터 바로 앞 변의 길이와 5번 전의 변의 길이 합이 n번째 삼각형의 변의 길이
int main(void) {
    int T, N;
    scanf("%d",&T);
    for(int i = 0; i < T; ++i) {
        scanf("%d",&N);
        unsigned long long table[100] = {1, 1, 1, 2, 2, 3, };
        for(int j = 6; j < N; ++j) {
            unsigned long long length = table[j-1] + table[j-5];
            table[j] = length;
        }
        cout << table[N-1] << endl;
    }
    return 0;
}
