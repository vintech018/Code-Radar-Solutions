#include <stdio.h>

int main() {
    int x, y;
    char z;

    scanf("%d %d %c", &x, &y, &z);

    switch (z) {
        case '+': 
            printf("%d\n", x + y);
            break;
        case '-': 
            printf("%d\n", x - y);
            break;
        case '*': 
            printf("%d\n", x * y);
            break;
        case '/': 
            if (y == 0) {
                printf("Error\n");
            } else {
                printf("%d\n", x / y);
            }
            break;
        default: 
            printf("Error\n");
    }

    return 0;
}
