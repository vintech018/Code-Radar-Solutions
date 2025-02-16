// Your code here...
#include <stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    switch(x){
        case 'R':
        printf("Stop\n");
        break;
        case 'G':
        printf("Go\n");
        break;
        case 'Y':
        printf("Slow Down\n");
        break;
        default:
        printf("Invalid input");
    }
    return 0;
}