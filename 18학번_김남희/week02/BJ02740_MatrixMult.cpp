/* 201824421 Kim Namhee
 *	Baekjoon 02740 : Matrix Multiplication - Get C = A * B
 *	Language : Python 3
 *	Code Length : 578 B, Time : 8 ms, Mem : 1,984 KB
 */

#include <iostream>

using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m;
	
	// Set array A
	int A[n][m];
	
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < m; j++)
			cin >> A[i][j];
	
	cin >> m >> k;
	
	// Set array B
	int B[m][k];
	
	for (int i = 0; i < m; i++) 
		for (int j = 0; j < k; j++)
			cin >> B[i][j];

	// Set array C
	int C[n][k];

	for (int i = 0; i < n; i++) 
		for (int j = 0; j < k; j++)
			C[i][j] = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			for (int h = 0; h < m; h++) {
				C[i][j] += A[i][h] * B[h][j];
			}
			// print array C
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
}
