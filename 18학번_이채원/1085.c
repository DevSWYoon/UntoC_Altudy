#include <stdio.h>

int main(){
    int x,y,w,h;
    int dis[4];
    int i,min=100000;

    scanf("%d %d %d %d",&x,&y,&w,&h);

    dis[0]=x;
    dis[1]=y;
    dis[2]=w-x;
    dis[3]=h-y;

    for(i=0; i<4; i++)
        if(dis[i]<min) min=dis[i];

    printf("%d",min);
}
