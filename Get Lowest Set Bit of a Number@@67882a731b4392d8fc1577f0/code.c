#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Find the position of the lowest set bit
    int position = 0;
    if (n == 0) {
        // If n is 0, there are no set bits
        printf("-1\n");
        return 0;
    }

    while ((n & 1) == 0) {
        n >>= 1; // Right shift n to check the next bit
        position++;
    }

    printf("%d\n", position);
    return 0;
}