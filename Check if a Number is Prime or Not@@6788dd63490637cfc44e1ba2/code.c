// Your code here...
#include <stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if (i%1==0 && i%i==0){
        printf("Prime\n");
    }
    else{
        printf("Not Prime\n")
    }
    return 0;
}