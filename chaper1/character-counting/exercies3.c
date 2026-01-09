#include <stdio.h>

/* count lines in input */

int main(){
  signed int c,nl;
  
  // C assigne a casual value of variable so if dont inzialize the nl and run ++nl we are increse the random variable
  nl = 0;

  while((c = getchar()) != EOF){
    // A character written between single quotes represents an integer value equal to the numerical value of the character in the machine’s character set.
    if(c == '\n')
      ++nl;
  }

  printf("The count of lines is: %d\n",nl);
  
  return 0;
}
