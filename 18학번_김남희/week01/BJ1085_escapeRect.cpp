// 201824421 Kim Namhee
// ���� �˰��� 1085 : ���簢������ Ż��
// ���簢�� ��輱���� ���� �Ÿ��� �ּڰ� ���ϱ�
// ��� : C++11
// �ڵ� ���� : 844B, �ð� : 0ms, �޸� : 1984KB
#include <iostream>

using namespace std;

typedef struct rectangle{
	int width, height;
} rect; // (0,0) �����̶� w, h�� ���� ������ ���� 

void inputData(rect& r, int& x, int& y);
int getDist(rect& r, int& x, int& y); // ��輱������ �Ÿ� ���ϱ� 

int main(void) {
	rect r; // ���簢�� ���� 
	int x, y; // ���� ��ġ ���� 
	inputData(r, x, y);
	
	int dist = getDist(r, x, y);
	
	cout << dist;
} 

void inputData(rect& r, int& x, int& y) {
	cin >> x >> y >> r.width >> r.height;
}

int getDist(rect& r, int& x, int& y) {
	int minDistX = x < r.width-x ? x : r.width-x; // x��ǥ���� ���� ª�� �Ÿ�
	int minDistY = y < r.height-y ? y : r.height-y; // y��ǥ���� ���� ª�� �Ÿ�
	int minDist = minDistX < minDistY ? minDistX : minDistY; // ������ �� �� ª�� �� ����
	return minDist; 
}
