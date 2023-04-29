#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("The cube of first %d natural numbers are:\n", n);
    
    for(i = 1; i <= n; i++) {
        printf("%d^3 = %d\n", i, i*i*i);
    }
    
    return 0;
}

