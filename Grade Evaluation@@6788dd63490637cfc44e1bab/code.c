// Your code here...
#include <stdio.h>

int main() {
    char x;

    scanf(" %c", &x);

    switch (x) {
        case 1: 
        if ('x'='A'){
            printf("Excellent\n",x);
            break;
        }
        case 2: 
        if ('x'='B'){
            printf("Good\n",x);
            break;
        }
        case 3: 
        if ('x'='C'){
            printf("Average\n",x);
            break;
        }
        case 4: 
        if ('x'='D'){
            printf("Below Average\n",x);
            break;
        }
        case 5: 
        if ('x'='F'){
            printf("Fail\n",x);
            break;
        }
        default:
        printf("Invalid grade");
    }

    return 0;
}
