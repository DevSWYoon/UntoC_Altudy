#include <iostream>
using namespace std;

int main() {
	int x, y, w, h;
	int a[4];
	cin >> x >> y >> w >> h;
	a[0] = x;
	a[1] = y;
	a[2] = w - x;
	a[3] = h - y;

	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 4; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << a[0];
	return 0;
}