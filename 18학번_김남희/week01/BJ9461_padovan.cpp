// 201824421 Kim Namhee
// ���� �˰��� 9461 : �ĵ��� ����(Dyn.Prog)
// �ĵ��� ���� P(N) ���ϱ�
// ��� : C++11
// �ڵ� ���� : 662B, �ð� : 4ms, �޸� : 1984KB

#include <iostream>
#define MAX 100

using namespace std;

long long sequence[MAX+1]; //������ �����ϴ� ����

void initialSequence(void);

int main(void) {
	int t; // �׽�Ʈ ���̽��� ����
	cin >> t;
	
	initialSequence();
	
	int num[t];
	for (int i = 0; i < t; i++) {
		int n; // �Ķ�� ���� ����
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

