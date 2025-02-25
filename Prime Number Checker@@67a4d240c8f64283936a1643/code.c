#include <stdio.h>

// Function prototype for isPrime
int isPrime(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is prime\n", n);
    } else {
        printf("%d is not prime\n", n);
    }

    // Displaying name and roll number
    printf("Name: Vaibhav Chawla, Roll No.: 2410990479\n");

    return 0;
}

// Function definition for isPrime
int isPrime(int n) {
    if (n <= 1) {
        return 0;  // 0 and 1 are not prime
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;  // Not prime if divisible
        }
    }
    return 1;  // Prime if no divisor found
}
