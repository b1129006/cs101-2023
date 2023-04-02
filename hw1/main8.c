/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    char a[] = "Hello";
    int len = sizeof(a) - 1;
    char tmp;
    for (int i = 0; i < len/2; i++){
        tmp = a[i];
        a[i] = a[len-i-1];
        a[len-i-1] = tmp;
    }
    a[0] = a[0] - 32;
    a[len-1] = a[len-1] +32;
    printf("%s", a);
    return 0;
}