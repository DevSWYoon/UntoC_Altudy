#include <bits/stdc++.h>

using namespace std;

int algorithm(int N, int M, int K){
	int team=0;
	if(N>=2*M){		//������ ���� ����2�躸�� ���ų� ������ 
		team=M;		
		N=N-2*M;	//���� �ȵ��� ���� ������ �� 
		K-=N;
		if(K>0){
			team=(team*3-K)/3;
		}
	}
	else{
		if(N%2==1)K-=1; //N�� Ȧ���̸� K�� �ϳ� ���ش�. 
		team=N/2;		//���� ����N/2�̴�. 
		M-=N/2;			//���� �ȵ��� ���� ������ �� 
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
