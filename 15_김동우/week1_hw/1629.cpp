#include <bits/stdc++.h>
//201510704_�赿��  
//�޸� : 1984 KB �ð� : 0ms 
using namespace std;
// ������ �� : �ʹ� ū ���� �ǹ����� �����÷ο찡 �ȴ�. 
// A-B = k *M �̸� A mod M = B mod M �̴�. 
long long calc(int A,int B,int C){
	if(B==1){
		return A;
	}
	long long tmp = calc(A,B/2,C);
	if(B%2==0){
		return tmp*tmp%C;
	}
	else{
		return tmp*tmp%C*A%C;
	}

}

//A%C�� ���ϱ�.
int main(void){
	int  A,B,C;
	cin>>A>>B>>C;
	cout<<calc(A%C,B,C);
	return 0;
}
