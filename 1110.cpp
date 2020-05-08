#include <stdio.h>

int main() {
	int n, a, b, k, count = 0;
	scanf_s("%d", &n);
	k = n;
	while (1) {
		count++;
		if (n < 10)
			n = 10 * n + n;
		else {
			a = n % 10;
			b = n / 10;
			if (a + b >= 10) {
				n = 10 * a + (a + b) % 10;
			}
			else
				n = 10 * a + (a + b);
		}
		if (n == k) break;
	}
	printf("%d", count);
	return 0;
}