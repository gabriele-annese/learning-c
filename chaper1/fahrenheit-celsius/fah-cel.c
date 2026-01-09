/*
 * This program create a Fahrenheit-Celsius table
 * for example:
 * 0 - 20...
 * this program is a exercise part of "The C Programming langauge" book
 */

#include <stdio.h>

#define LOWER 0;
#define UPPER 300;
#define STEP 20; 

int main(){
  float fahr,celsius;

  fahr = lower;
  while(fahr <= upper){
	  celsius = (5.0 / 9.0) * (fahr - 32.0); 
	  printf("%3.0f\t%6.2f\t\n",fahr,celsius);
	  fahr = fahr + step;
  }
}
