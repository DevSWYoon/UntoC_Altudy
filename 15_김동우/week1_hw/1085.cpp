#include <bits/stdc++.h>
//201510704_김동우  
//메모리 : 1980 KB, 시간 : 0ms 
using namespace std;

int main(void){
	int x,y,w,h;
	cin>>x>>y>>w>>h;
	cout<<min({x,y,w-x,h-y});
	return 0;
}
