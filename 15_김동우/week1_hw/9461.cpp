#include <bits/stdc++.h>
//201510704_김동우  
//메모리 : 1984 KB, 시간 : 0 ms
using namespace std;
long long dp[101];

vector<int>input(int T,vector<int> v){
	cin>>T;
	long long tmp;
	for(int i=0;i<T;++i){
		cin>>tmp;
		v.push_back(tmp);
	}
	return v;
}

void calc(void){
	dp[0]=1,dp[1]= 1,dp[2]=1,dp[3]=2;
	for(int i=4;i<100;++i){
		dp[i]=dp[i-2]+dp[i-3];
	}
}

void out(vector<int> v){
	long long tmp;
	for(int i=0;i<v.size();++i){
		tmp=v[i];
		cout<<dp[tmp-1]<<endl;
	}
}


int main(void){
	int T;
	vector<int> v;
	v=input(T,v);
	calc();
	out(v);
	
	return 0;
}
