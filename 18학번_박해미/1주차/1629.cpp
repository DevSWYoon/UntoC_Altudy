// 201824484 Park Haemi
// 1984kb, 72ms

#include <bits/stdc++.h>
using namespace std;

long long power(long long a, long long b, long long c) {
    long long pow_result;

    if (b==1) {
        pow_result = a%c;
    }
    else if (b%2==0) {
        pow_result = ((power(a, b/2, c) % c) * (power(a, b/2, c) % c)) % c;
    }
    else {
        pow_result = ((power(a, b/2, c) % c) * (power(a, b/2 + 1, c) %c)) % c;
    }

    return pow_result;
}

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    cout << power(a, b, c);

    return 0;
}
