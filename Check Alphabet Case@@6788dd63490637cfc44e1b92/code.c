// Your code here...
#include <stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if (x>='A' && x<='Z'){
        printf("Uppercase\n");
    }
    else if (x>='a' && x<='a'){
        printf("Lowercase\n");
    }
    else {
        printf("Not an alphabet");
    }
    return 0;
}