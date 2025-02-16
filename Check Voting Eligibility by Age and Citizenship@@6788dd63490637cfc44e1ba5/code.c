#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d", &x,&y);
        if (y==1 && x>=18){
            printf("Eligible\n");
        }
    else {
        printf("Not Eligible");
    }
    return 0;
}