#include <stdio.h>

int main() {
    int n, i, count = 0;
    
    printf("Enter n value: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {  // Loop from 1 to n
        if (n % i == 0) {  // Check if i is a divisor of n
            count++;  // Increment divisor count
        }
    }

    if (count == 2) {  // A prime number has exactly 2 divisors (1 and itself)
        printf("Prime Number\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
