// 201824421 Kim Namhee
// 백준 알고리즘 1085 : 직사각형에서 탈출
// 직사각형 경계선까지 가는 거리의 최솟값 구하기
// 언어 : C++11
// 코드 길이 : 844B, 시간 : 0ms, 메모리 : 1984KB
#include <iostream>

using namespace std;

typedef struct rectangle{
	int width, height;
} rect; // (0,0) 고정이라 w, h에 대한 정보만 저장 

void inputData(rect& r, int& x, int& y);
int getDist(rect& r, int& x, int& y); // 경계선까지의 거리 구하기 

int main(void) {
	rect r; // 직사각형 정보 
	int x, y; // 현재 위치 저장 
	inputData(r, x, y);
	
	int dist = getDist(r, x, y);
	
	cout << dist;
} 

void inputData(rect& r, int& x, int& y) {
	cin >> x >> y >> r.width >> r.height;
}

int getDist(rect& r, int& x, int& y) {
	int minDistX = x < r.width-x ? x : r.width-x; // x좌표에서 제일 짧은 거리
	int minDistY = y < r.height-y ? y : r.height-y; // y좌표에서 제일 짧은 거리
	int minDist = minDistX < minDistY ? minDistX : minDistY; // 위에서 둘 중 짧은 걸 넣음
	return minDist; 
}
