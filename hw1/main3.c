/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    char a[] = "ABCabcABC";
    int shift = 4;
    
    printf("%s\n", a);
    printf("%d\n", shift);
    for(int i = shift; i < sizeof(a)-1; i++){
        printf("%c", a[i]);
    }
    for(int i = 0; i < shift; i++){
        printf("%c", a[i]);
    }
    return 0;
}