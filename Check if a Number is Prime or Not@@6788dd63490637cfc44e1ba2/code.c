#include <stdio.h>

int main() {
    int n, i, count = 0;
    
    // Take input
    scanf("%d", &n);

    // Loop to count divisors
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    // Print output in required format
    if (count == 2) {
        printf("Prime\n");  // Changed from "Prime Number" to "Prime"
    } else {
        printf("Not Prime\n");
    }

    return 0;
}

