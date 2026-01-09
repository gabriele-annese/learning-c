#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
	float fhar, celsius;
	int max,min,step;

	for(fhar = UPPER; fhar >= LOWER; fhar = fhar - STEP){
		celsius = (5.0 / 9.0) * (fhar -32);
		printf("%3.0f\t%6.2f\t\n",fhar,celsius);
	}
}
