// Your code here...
#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if (y-x>0){
        printf("Profit\n");
    }
    else if (y-x==0){
        printf("No Profit No Loss\n");
    }
    else{
        printf("Loss");
    }
    return 0;
}