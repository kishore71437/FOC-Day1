#include <stdio.h>

int main() {
    int limit, i;
    
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    printf("The squares of the odd numbers from 1 to %d are:\n", limit);
    for (i = 1; i <= limit; i += 2) {
        printf("%d\n", i * i);
    }
    
    return 0;
}

