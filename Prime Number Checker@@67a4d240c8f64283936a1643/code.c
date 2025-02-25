#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;  // 0 and 1 are not prime
    if (n == 2) return 1;  // 2 is the only even prime number
    if (n % 2 == 0) return 0;  // Even numbers greater than 2 are not prime

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
