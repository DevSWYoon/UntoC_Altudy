// 201824421 Kim Namhee
// ���� �˰��� 1110 : ���ϱ� ����Ŭ
// ��� : C++11
// �ڵ� ���� : 702B, �ð� : 0ms, �޸� : 1984KB
#include <iostream>

using namespace std;

int sumCycle(int& n); // ���ϱ� ����Ŭ�� �����ϴ� �Լ�, ����ŬȽ�� ��� 

int main(void) {
	int n; // �Է� �����͸� ������ ����
	cin >> n;
	int cycleNum = sumCycle(n); // �Է� �������� ����Ŭ Ƚ���� ����
	
	cout << cycleNum << endl;
}
 
int sumCycle(int& n) {
	// tmp : ���ϱ� ����Ŭ ����� �ӽ÷� �����ϴ� ����
	// cycleNum : ����Ŭ Ƚ��
	int tmp = n, cycleNum = 0;
	do {
		int firstDigit = (tmp%10 + tmp/10)%10;
		int secondDigit = (tmp%10)*10;
		tmp = firstDigit + secondDigit;
		cycleNum++;	
	} while (tmp != n);
	
	return cycleNum;
} 
 
