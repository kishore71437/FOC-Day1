#include <stdio.h>

int main() {
   int n, i;
   float product = 1.0;

   printf("Enter the number of terms in the series: ");
   scanf("%d", &n);

   for(i = 1; i <= n; i++) {
      printf("Enter the value of term %d: ", i);
      float term;
      scanf("%f", &term);
      product *= term;
   }

   printf("Product of the series = %.2f", product);

   return 0;
}

