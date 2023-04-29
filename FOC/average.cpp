#include <stdio.h>

int main() {
    int n, i, num;
    float sum = 0, avg;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &num);
        sum += num;
    }

    avg = sum / n;
    printf("Average of the entered numbers is: %f", avg);

    return 0;
}

