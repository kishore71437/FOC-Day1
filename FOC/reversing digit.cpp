#include <stdio.h>

int main() {
    int num, sum = 0, rem;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    while (num != 0) {
        rem = num % 10;     
        sum += rem;        
        num /= 10;          
    }
    
    printf("The sum of digits of the entered integer is %d", sum);
    
    return 0;
}

