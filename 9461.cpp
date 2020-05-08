#include <iostream>
using namespace std;

int main() {
	unsigned long long arr[101] = { 1,1,1,1,2,2,3,4,5, };
	int T, N;

	cin >> T;

	unsigned long long *result= new unsigned long long[T];

	for (int i = 0; i < T; i++) {
		cin >> N;
		if (N > 8) {
			for (int j = 9; j <= N; j++)
				arr[j] = arr[j - 1] + arr[j - 5];
		}
		result[i] = arr[N];
	}
	for (int i = 0; i < T; i++)
		cout << result[i] << endl;
}