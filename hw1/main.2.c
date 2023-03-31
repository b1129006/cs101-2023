/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//main2
#include <stdio.h>

int main(){
    char a[] = "A1B2C3A5";
    for (int i = 0; i < sizeof(a)-1; i++){
        if (i%2 != 0){
            for (int j = 0; j < a[i] - 48; j++){
                printf("%c", a[i-1]);
            }
        }
    }
    
}