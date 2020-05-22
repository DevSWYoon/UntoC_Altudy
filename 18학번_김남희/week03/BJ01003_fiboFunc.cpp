/* 201824421 Kim Namhee
 *	Baekjoon 1672 : fibonacci function(피보나치 함수) 
 *	Language : C++11
 *	Code Length : 856 B, Time : 0 ms, Mem : 1,984 KB
 */

#include <iostream>

#define MAX 40

using namespace std;

int zeroCall[41];
int oneCall[41];

void setCallTable();

int main() {
	//1. Input Data
	int n; // testcase's number (테스트 케이스의 개수)
	cin >> n;
	
	int testCase[n]; //testcase : fibo's parameter
	for (int i = 0; i < n; i++) {
		cin >> testCase[i];
	}
	
	//2. Set fibo's call table - f(0) call table & f(1) call table
	setCallTable();
	
	//3. Output call number
	for (int i = 0; i < n; i++) {
		cout << zeroCall[testCase[i]] << ' ' << oneCall[testCase[i]] << '\n';
	}
}

void setCallTable() {
	//Set f(0) Call Table
	zeroCall[0] = 1; 
	zeroCall[1] = 0;
	
	for (int i = 2; i <= MAX; i++) {
		zeroCall[i] = zeroCall[i-2] + zeroCall[i-1];
	}
	
	//Set f(1) Call Table
	oneCall[0] = 0; 
	oneCall[1] = 1;
	
	for (int i = 2; i <= MAX; i++) {
		oneCall[i] = oneCall[i-2] + oneCall[i-1];
	}
}
