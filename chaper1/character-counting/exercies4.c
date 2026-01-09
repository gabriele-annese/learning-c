#include <stdio.h>

/* count the blanks tabs and newlines */

int main (){

  int cb,ct,cl = 0;
  int c;

  while((c = getchar()) != EOF){
    switch (c){
     case ' ':
       ++cb;
       break;
     case '\t':
       ++ct;
       break;
     case '\n':
        ++cl;
       break;
     default:
       break;
    }
  }

  printf("The counts\nBlanks: %d\nTabs: %d\nLines: %d\n", cb,ct,cl;
  
  return 0;
}
