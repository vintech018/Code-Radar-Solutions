// Your code here...
#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d", &x,&y,&z);
    if (x+y>z && y+z>x && x+z>y){
        printf("Valid\n");
    }
    else{
        printf("Invalid");
    }
    return 0;
}