#include <stdio.h>

int main() {
    int num, digit, count = 0;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    printf("Digits of the number %d are: ", num);

    while(num > 0) {
        digit = num % 10;
        printf("%d ", digit);
        num /= 10;
        count++;
    }

    printf("\nNumber of digits in %d is: %d", num, count);

    return 0;
}

