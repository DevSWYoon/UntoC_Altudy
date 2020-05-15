#include <bits/stdc++.h>
//201510704_김동우  
//메모리 : 1984 KB 시간 : 0ms 
using namespace std;
// 주의할 점 : 너무 큰 수가 되버리면 오버플로우가 된다. 
// A-B = k *M 이면 A mod M = B mod M 이다. 
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

//A%C를 구하기.
int main(void){
	int  A,B,C;
	cin>>A>>B>>C;
	cout<<calc(A%C,B,C);
	return 0;
}
