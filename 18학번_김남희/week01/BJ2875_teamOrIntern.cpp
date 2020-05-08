// 201824421 Kim Namhee
// ���� �˰����� 2875 : ��ȸor����(Greedy Algo)
// �־��� ���� ���� �� �ִ� �ִ��� �� �� ���ϱ�
// ��� : C++11
// �ڵ� ���� : 434B, �ð� : 0ms, �޸� : 1984KB

#include <iostream>
using namespace std;

int main() {
	int f, m, intern; // ���л� ��, ���л� ��, ���Ͻ� ���� �ο�
	cin >> f >> m >> intern; 
	
	// �ִ��� �� �����
	int team = f/2 < m ? f/2 : m;
	
	// ���� �ƴ� �ο����� ���� ����
	intern = intern - (f+m - team*3); 	
	// �����ϸ� ���� ��ü�ϰ� ���Ϻ�����
	while (intern > 0) {
		team--;
		intern = intern - 3;
	}
	
	cout << team;
}
// 1. �ϴ� �ִ��� ���� �����. ���� �ƴ� �ο����� ������ ����.
// 2. �׷��� �����ϸ�, ���� ��ü�ϰ� ������ ������.
