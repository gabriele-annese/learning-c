#include <stdio.h>

#define ALLOC_SIZE 10000 // size of available space

static char allocbuf[ALLOC_SIZE]; // storage for alloc
static char *allocp = allocbuf; // next free position

char *alloc(int n){

    printf("[+] The result of exepression (allocbuf + ALLOC_SIZE - allocp) is: %d\n", (allocbuf + ALLOC_SIZE - allocp));

    if(allocbuf + ALLOC_SIZE - allocp >= n){
        allocp += n;
        // return the initial address of allocated array 
        return allocp - n;
    } else {

        return 0;
    }
}

void afree(char *p){
    if(p >= allocbuf && p < allocbuf + ALLOC_SIZE)
        allocp = p;
}

int my_strlen(char *s){
    char *p = s;

    while(*p != '\0'){
        p++;
    }

    return p - s;
}

int main (){

    int array_bytes[3] = {50,40,50};
    int length = sizeof(array_bytes) / sizeof(array_bytes[0]);

    for(int i=0; i < length; i++){
        printf("[+] Bytes to allocate: %d\n", array_bytes[i]);
        char *p = alloc(array_bytes[i]);
        if(p == 0){
            printf("[!] Error during the allocation buffer");
            return 1;
        }
        printf("[+] The address of pointer is %p\n\n",p);

        // Test afree function only for the first element
        if(i == 0)
            afree(p);
    }

    char *name = "Gabriele";
    int lenght_name = my_strlen(name);
    printf("[+] The lenght of the name %s is: %d\n", name, lenght_name);
}



