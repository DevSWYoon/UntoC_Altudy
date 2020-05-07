#include <bits/stdc++.h>

using namespace std;

int algorithm(int N, int M, int K){
	int team=0;
	if(N>=2*M){		//여성의 수가 남자2배보다 많거나 같으면 
		team=M;		
		N=N-2*M;	//팀에 안들어가고 남은 여자의 수 
		K-=N;
		if(K>0){
			team=(team*3-K)/3;
		}
	}
	else{
		if(N%2==1)K-=1; //N이 홀수이면 K에 하나 뺴준다. 
		team=N/2;		//팀은 수는N/2이다. 
		M-=N/2;			//팀에 안들어가고 남은 남자의 수 
		K=K-M;
		if(K>0){
			team=(team*3-K)/3;
		}
	}
	if(team<0) team=0;
	return team;
}

int main(void){
	int N,M,K,answer;
	cin>>N>>M>>K;
	answer=algorithm(N,M,K);
	cout<<answer;
	return 0;
}
