#include <stdio.h>

int main() {
    int a, b;

    // Input two space-separated integers
    scanf("%d %d", &a, &b);

    // Check the condition
    if ((a > 0 && b < 0) || (a == 0 && b == 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
