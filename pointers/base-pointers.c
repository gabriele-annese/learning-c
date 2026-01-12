
#include <stdio.h>

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main (){
  int x = 1, y = 2, z[10];
  
  int *ip;  /* ip is a pointer to int */
  ip = &x; /* ip now is a pointer to x */
  y = *ip; /* y now is 1 */
  *ip = 0; /* x now is 0 */
  ip = &z[0]; /* ip is a pointer to the first element of z */

  printf("The address of pointer ip is %p\n",ip);

  int *iq; /* iq is a pointer to int */
  iq = ip; /* iq point to the same address of ip */

  printf("The address of pointer iq is %p\n",iq);


  /** Example with a function call.
   *  To modify the value of a varible in a context of function
   *  it's necessary pass the address of the value with operator &
   *  and in the function the argument will be declared with * operator,
   *  this specifed that we are excpet the pointers variables
   */

  int a = 5, b = 10;
  printf("The value of variable a is: %d\nThe value of variable b is: %d\n",a,b);
  
  printf("Calling swap function...\n");
  swap(&a,&b);
  printf("The value of variable a is: %d\nThe value of variable b is: %d\n",a,b);
  
  return 0;
}
