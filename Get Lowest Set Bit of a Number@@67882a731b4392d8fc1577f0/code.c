/#include <stdio.h>

int main() {
    int n, position = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("No set bits found (number is zero).\n");
    } else {
        position = __builtin_ctz(n); // Built-in function to count trailing zeros
        printf("The position of the lowest set bit is: %d\n", position);
    }
    return 0;
}
