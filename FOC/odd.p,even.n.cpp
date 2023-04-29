#include <stdio.h>

int main() {
   int n, i;
   int sum = 0;
   int sign = 1;

   printf("Enter the value of n: ");
   scanf("%d", &n);

   for(i = 1; i <= n; i++) {
      sum += i * sign;
      sign *= -1;
   }

   printf("Sum of the series = %d", sum);

   return 0;
}

