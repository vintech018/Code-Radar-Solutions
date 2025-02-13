// Your code here...
#include<stdio.h>
int main(){
    int num;
    int n;
    scanf("%d",&num,&n);
    int nthbit= num>>n&1;
    printf("%d";nthbit)
return 0;
}