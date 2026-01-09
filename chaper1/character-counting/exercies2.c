#include <stdio.h>

/* count characters in input; 2nd version */

int main() {
  double nc;
  for(nc = 0; getchar() != EOF; nc++);
  
  // %0.f suppress printing of the decimal point and the fraction part, which is zero.
  printf("The count of characters is %.0f\n", nc);  
  
}
