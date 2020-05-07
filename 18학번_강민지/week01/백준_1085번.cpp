// 201824403 KangMinJi
// 1984kb, 0ms
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int x, y, w, h;
    scanf("%d%d%d%d",&x,&y,&w,&h);
    printf("%d",min(w-x,min(x,min(h-y,y))));
    return 0;
}
