// 201824421 Kim Namhee
// 백준 알고리즘 9461 : 파도반 수열(Dyn.Prog)
// 파도반 수열 P(N) 구하기
// 언어 : C++11
// 코드 길이 : 662B, 시간 : 4ms, 메모리 : 1984KB

#include <iostream>
#define MAX 100

using namespace std;

long long sequence[MAX+1]; //수열을 저장하는 변수

void initialSequence(void);

int main(void) {
	int t; // 테스트 케이스의 개수
	cin >> t;
	
	initialSequence();
	
	int num[t];
	for (int i = 0; i < t; i++) {
		int n; // 파라반 수열 인자
		cin >> num[i];
		cout << sequence[num[i]] << endl;
	} 
}

void initialSequence(void) {
	sequence[0] = 0;
	sequence[1] = 1;
	sequence[2] = 1;
	sequence[3] = 1;
	
	for (int i = 4; i <= MAX; i++) {
		sequence[i] = sequence[i-3] + sequence[i-2];
	}
}

