#include <stdio.h>

long m[100];

long long Top_Down(int n){
    if(m[n]) return m[n];
    if(n==0 || n==1 || n==2) return 1;
    if(n==3 || n==4) return 2;

    m[n]=Top_Down(n-1)+Top_Down(n-5);    //Top_Down(n-2)+Top_Down(n-3);
    return m[n];
}

long long Bottom_Up(int n){
    int i;
    m[0]=1; m[1]=1; m[2]=1;
    m[3]=2; m[4]=2;

    for(i=5;i<=n;i++)
        m[i]=m[i-1]+m[i-5];

    return m[n];
}

int main(){
    int t,i,n;
    scanf("%d",&t);

    for(i=0;i<t;i++){
        scanf("%d",&n);
        printf("%lld\n",Bottom_Up(n-1));
    }
}
