#include <stdio.h>
int main(){
    int origin,n,c=0;
    scanf("%d",&n);

    origin=n;
    while(1){
        c++;
        n=(n%10)*10+(n/10+n%10)%10;
        if(origin==n) break;
    }
    printf("%d",c);
}
