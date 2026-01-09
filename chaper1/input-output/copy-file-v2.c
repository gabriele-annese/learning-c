#include <stdio.h>

int main(){
	int c;
	// Print the valued of EOF symbolic constant
	printf("EOF value is %d\n", EOF);

	while((c = getchar()) != EOF){
		putchar(c);
	}

}
