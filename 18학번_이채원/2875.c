#include <stdio.h>

int main(){
    int n,m,k,c=0;
    scanf("%d %d %d",&n,&m,&k);
    while((n-2)+(m-1)>=k && n>=2 && m>=1){
        n=n-2;
        m=m-1;
        c++;
    }
    printf("%d",c);
}
