// Your code here...
#include <stdio.h>
int main(){
    int x,y;
    scanf("%d" "%d", &x,&y);
    if ((x%y==0) || (y%x==0)){
        printf("Yes\n");
    }
    else{
        printf("No");
    }
    return 0;
}