#include <stdio.h>

int main(){
	int c;

	while((c = getchar()) != EOF){		/* EOF = End of File */
		putchar(c);
	}
}
