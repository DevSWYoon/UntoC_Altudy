// 201824403 KangMinJi
// 1994kb, 0ms
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int num, current_num = -1;
    int cycle = 0;
    scanf("%d", &num);
    while(num!=current_num) {
        if(cycle==0)
            current_num = num;
        current_num = current_num%10*10 + (current_num/10+current_num%10)%10;
        cycle++;
    }
    printf("%d\n", cycle);
    return 0;
}
