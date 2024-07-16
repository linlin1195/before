/**
 * <a href="https://oj.17ac.cn/problems/1116">素数回文数</a>
 */

#include <iostream>

using namespace std;

bool not_prime[1001];
int primes[991];
int primes_num = 0;

void euler_sieve(int max_num) {
    not_prime[0] = not_prime[1] = true;
    for (int i = 2; i <= max_num; i++) {
        if (!not_prime[i])
            primes[primes_num++] = i;
        for (int j = 0; j < primes_num && i * primes[j] <= max_num; j++) {
            not_prime[i * primes[j]] = true;
            if (i % primes[j] == 0) break;
        }
    }
}

int reverse(int x) {
    int y = 0;
    while (x) {
        y = (y << 3) + (y << 1) + x % 10;
        x /= 10;
    }
    return y;
}

int main() {
    euler_sieve(1000);
    for (int i = 0; i < primes_num; i++)
        if (primes[i] >= 10 && primes[i] == reverse(primes[i]))
            cout << primes[i] << '\n';
    return 0;
}
