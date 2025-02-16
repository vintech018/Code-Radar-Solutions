// Your code here...
#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d" "%d" "%d", &x,&y,&z);
    if (x==y && y==z && x==z){
        printf("Equilateral\n");
    }
    else if (x!=y && y!=z){
        printf("Scalene\n");
    }
    else{
        printf("Isosceles")
    }
    return 0;
}