#include <bits/stdc++.h>
//201510704_�赿��  
//�޸� : 1980 KB, �ð� : 0ms 
using namespace std;

int main(void){
	int x,y,w,h;
	cin>>x>>y>>w>>h;
	cout<<min({x,y,w-x,h-y});
	return 0;
}
