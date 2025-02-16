#include <stdio.h>

int main() {
    char x;

    // Taking input
    scanf(" %c", &x);

    // Using switch-case for grading system
    switch (x) {
        case 'A': 
            printf("Excellent\n");
            break;
        case 'B': 
            printf("Good\n");
            break;
        case 'C': 
            printf("Average\n");
            break;
        case 'D': 
            printf("Below Average\n");
            break;
        case 'F': 
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade\n");
    }

    return 0;
}
