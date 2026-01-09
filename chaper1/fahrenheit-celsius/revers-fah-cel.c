#include <stdio.h>


int main(){
	float fhar, celsius;
	int max,min,step;

	for(fhar = 300; fhar >= 0; fhar = fhar - 20){
		celsius = (5.0 / 9.0) * (fhar -32);
		printf("%3.0f\t%6.2f\t\n",fhar,celsius);
	}
}
