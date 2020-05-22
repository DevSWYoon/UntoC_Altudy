// 201824421 Kim Namhee
// 백준 알고리즘 2875 : 대회or인턴(Greedy Algo)
// 주어진 수로 만들 수 있는 최대의 팀 수 구하기
// 언어 : C++11
// 코드 길이 : 434B, 시간 : 0ms, 메모리 : 1984KB

#include <iostream>

using namespace std;

int main() {
	int f, m, intern; // 여학생 수, 남학생 수, 인턴쉽 참여 인원
	cin >> f >> m >> intern; 
	
	// 최대한 팀 만들기
	int team = f/2 < m ? f/2 : m;
	
	// 팀이 아닌 인원에서 인턴 빼기
	intern = intern - (f+m - team*3); 	
	// 부족하면 팀을 해체하고 인턴보내기
	while (intern > 0) {
		team--;
		intern = intern - 3;
	}
	
	cout << team;
}
// 1. 일단 최대한 팀을 만든다. 팀이 아닌 인원에서 인턴을 뺀다.
// 2. 그래도 부족하면, 팀을 해체하고 인턴을 보낸다.
