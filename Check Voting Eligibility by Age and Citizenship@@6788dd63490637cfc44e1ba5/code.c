#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d", &x,&y);
    for (y=1){
        if (x>=18){
            printf("Eligible\n");
        }
    }
    else {
        printf("Not eligible")
    }
    return 0;
}