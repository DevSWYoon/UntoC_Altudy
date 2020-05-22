// 201824421 Kim Namhee
// ���� �˰��� 1629 : ����
// (a^b)%c �� ����
// ��� : C++11
// �ڵ� ���� : 667B, �ð� : 0ms, �޸� : 1984KB

#include <iostream>

using namespace std;

long long int getRemainder(long long int a, long long int b, long long int c); //�������� ���ϴ� �Լ� 

int main(void) {
	long long int a, b, c;
	cin >> a >> b >> c;
		
	long long int result = getRemainder(a, b, c);

	cout << result;
}

long long int getRemainder(long long int a, long long int b, long long int c) {
	long long int factor = b%c;
	a = a%c;
	if (b == 0) return 1;
	else if (b == 1) return a;
	else if (b%2 != 0) return ((getRemainder(a, b-1, c)*a)%c);
	long long int half = getRemainder(a, b/2, c);
	half = half%c;
	return (half*half)%c;
}

