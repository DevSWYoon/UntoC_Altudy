// 201824421 Kim Namhee
// 백준 알고리즘 1110 : 더하기 사이클
// 언어 : C++11
// 코드 길이 : 702B, 시간 : 0ms, 메모리 : 1984KB
#include <iostream>

using namespace std;

int sumCycle(int& n); // 더하기 사이클을 실행하는 함수, 사이클횟수 출력 

int main(void) {
	int n; // 입력 데이터를 저장할 변수
	cin >> n;
	int cycleNum = sumCycle(n); // 입력 데이터의 사이클 횟수를 저장
	
	cout << cycleNum << endl;
}
 
int sumCycle(int& n) {
	// tmp : 더하기 사이클 결과를 임시로 저장하는 변수
	// cycleNum : 사이클 횟수
	int tmp = n, cycleNum = 0;
	do {
		int firstDigit = (tmp%10 + tmp/10)%10;
		int secondDigit = (tmp%10)*10;
		tmp = firstDigit + secondDigit;
		cycleNum++;	
	} while (tmp != n);
	
	return cycleNum;
} 
 
