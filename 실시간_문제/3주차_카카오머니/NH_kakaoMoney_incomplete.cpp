#include <iostream>

#define MAX 9000000000000000000

using namespace std;

int main() {
	//1. Input Data
	int n; // the number of log
	cin >> n;
	
	long long info[2][n]; // information of log (a,b) -> a: [0][n] / b: [1][n]
	
	for (int i = 0; i < n; i++) {
		cin >> info[0][i] >> info[1][i];
	}
	
	//2. Get M! - using withdraw(���) info 
	long long M = MAX; // �ּ� ���� �ݾ�(Minimum charge amount)
	
	for (int i = 0; i < n; i++) {
		//ai < 0 & bi - ai(ai<0) /= bi-1
		if (info[0][i] < 0 && info[1][i] - info[0][i] != info[1][i-1]) {
			// bi - ai - bi-1 = M -> ���������� �۴ٸ� ���� �ƴϸ� ������ �״��
			if (info[1][i] - info[0][i] - info[1][i-1] < M)
				M = info[1][i] - info[0][i] - info[1][i-1];
			//cout << "Withdraw Over Money!! : " << i+1 << " and current M : " << M << endl;
		}
	}
	
	cout << M;
}
