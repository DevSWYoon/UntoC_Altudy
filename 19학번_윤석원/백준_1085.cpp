// 201924518 윤석원
// Memory: 1980KB, Time required : 0ms, May 7
#include <iostream>
using namespace std;

int main(void)
{
    int x, y, w, h, nearest_x, nearest_y;
    
    cin>>x>>y>>w>>h;
    
    if(x > w/2)
        nearest_x = w - x;
    else
        nearest_x = x;
    
    if(y > h/2)
        nearest_y = h - y;
    else
        nearest_y = y;
    
    if(nearest_x > nearest_y)
        cout<<nearest_y<<endl;
    else
        cout<<nearest_x<<endl;
    
    return 0;
}
