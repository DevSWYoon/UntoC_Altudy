/* 201824421 Kim Namhee
 *	Baekjoon 2293 : Coin1
 *	Language : C++11
 *	Code Length : 641 B, Time : 0 ms, Mem : 2,024 KB
 */
 
#include <iostream>

#define MAX 10001

using namespace std;

// caseNum : Number of cases to create the number corresponding to the index
int caseNum[MAX]; 

int main() {
	//1. Input Data
	int coinNum, val; // the number of coin & the value we need to get
	cin >> coinNum >> val;

	int coinVal[coinNum]; // coin's value
	
	for (int i = 0; i < coinNum; i++) {
		cin >> coinVal[i];
	}
	
	//2. get number of cases
	caseNum[0] = 1;
	for (int i = 0; i < coinNum; i++) {
		for (int j = coinVal[i]; j <= val; j++) {
			if (j - coinVal[i] >= 0) {
				caseNum[j] += caseNum[j - coinVal[i]];
			}
		}
	}
	
	//3. Output result
	cout << caseNum[val];
}
