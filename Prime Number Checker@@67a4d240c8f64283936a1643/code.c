#include <stdio.h>
int main(){
   int n, prime = 0;
   scanf("%d", &n);

    if (n <= 1) {
        prime = 1;  // 0 and 1 are not prime
    } 
    else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prime = 1;  // Not prime if any divisor is found
                break;      // No need to check further
            }
        }
    }

    if (prime) {
        printf("%d is not prime\n", n);
    } else {
        printf("%d is prime\n", n);
    }

    return 0; // Fixed the placement of return statement
}
